#include "Iot.h"
constexpr auto URI = "tcp://47.113.151.63:1883";
Iot* Iot::_instance;



Iot::Iot()
{
    std::string client_id = "86-LVGL-";
    client_id += std::to_string(std::time(nullptr));
    client = std::make_unique<mqtt::async_client>(URI, client_id);

    client->set_callback(*this);
    connOpts.set_keep_alive_interval(20);
    connOpts.set_clean_session(false);
    connOpts.set_automatic_reconnect(true);
    
    try {
        client->connect(connOpts)->wait();

    }
    catch (const mqtt::exception& exc) {
        std::cerr << "Error: " << exc.get_error_str() << std::endl;
        exit(1);
    }
}
Iot::~Iot() {

}

void Iot::message_arrived(mqtt::const_message_ptr msg) 
{
    auto topic = msg->get_topic();
    if (topic_callbacks.count(topic) != 0) {
        auto lists = topic_callbacks[topic];
        for (const auto& callback : lists)
        {
            // std::cout << msg->get_payload() << std::endl;
            callback(std::vector<uint8_t>(msg->get_payload().begin(), msg->get_payload().end()));
        }
    }
}


void Iot::Subscribe(const std::string& topic, IotCallbackType callback)
{
    //client->subscribe()
    try
    {
        for (size_t i = 0; i < 100; i++)
        {
            if(client->is_connected())
                break;
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        if (!client->is_connected())
            return;
        client->subscribe(topic, 1)->wait();
    }
    catch (const mqtt::exception& exc)
    {
        std::cerr << "Error: " << exc.get_error_str() << std::endl;
        return;
    }


    auto& lists = topic_callbacks[topic];
    lists.push_back(callback);

}
