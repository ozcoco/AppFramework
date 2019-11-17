#include <iostream>
#include <map>
#include <queue>
#include <algorithm>
#include <thread>
#include <chrono>

int main()
{
    std::map<char, int> first;

    first['a'] = 10;
    first['b'] = 30;
    first['c'] = 50;
    first['d'] = 70;

    for (auto &e: first)
    {
        std::cout << e.first << "=" << e.second << std::endl;
    }

    std::queue<std::string> qa;

    qa.push("123");
    qa.push("abc");
    qa.push("!@#$");
    qa.push("aaaa");
    qa.push("sdsd");
    qa.push("5675467");

    for (auto &item = qa.front(); !qa.empty(); qa.pop(), item = qa.front())
    {
        std::cout << item << std::endl;
    };

    const auto &task = [](int arg) -> void
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));

        std::cout << "!!!!!!!!!!!!!!!!!" << std::endl;

    };

    std::thread t1(task, 1);

    t1.join();

    return 0;
}