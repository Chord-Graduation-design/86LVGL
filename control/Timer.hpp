#pragma once

#include <iostream>
#include <thread>
#include <chrono>
#include <atomic>
using timer_function_t = void(*)();

class Timer {
    std::atomic<bool> active{ true };

public:
    void setTimeout(int delay, timer_function_t function);
    void setInterval(int interval, timer_function_t function);
    void stop();

};

void Timer::setTimeout(int delay, timer_function_t function) {
    active = true;
    std::thread t([=]() {
        if (!active.load()) return;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));
        if (!active.load()) return;
        function();
        });
    t.detach();
}
void Timer::setInterval(int interval, timer_function_t function) {
    active = true;
    std::thread t([=]() {
        while (active.load()) {
            if (!active.load()) return;
            function();
            std::this_thread::sleep_for(std::chrono::milliseconds(interval));
        }
        });
    t.detach();
}

void Timer::stop() {
    active = false;
}
