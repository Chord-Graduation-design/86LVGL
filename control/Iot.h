#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <unordered_map>
#include <functional>
#include <thread>
#include <memory>
#include <mqtt/async_client.h>

class Iot : public virtual mqtt::callback {
private:
    using IotCallbackType =  std::function<void(std::vector<uint8_t> datas)>;
    static Iot* _instance;
    std::unique_ptr<mqtt::async_client> client;
    // 反正也不删除,就不用list了,正常来说vector比list快,但是不好删除 list 是链表,vector是连续内存
    // std::unordered_map<std::string, std::list<IotCallbackType>> topic_callbacks;
    std::unordered_map<std::string, std::vector<IotCallbackType>> topic_callbacks;
    mqtt::connect_options connOpts;
    Iot();
    ~Iot();

    virtual void message_arrived(mqtt::const_message_ptr msg) override;
public:
    static inline Iot* GetInstance() {
        if (!_instance)
            _instance = new Iot();
        return _instance;
    }
    void Subscribe(const std::string& topic, IotCallbackType callback);


};
