#include <iostream>
#include "command.hpp"

Commands::Commands() {};

void Commands::parse(const std::string &str) {
    for (auto it = str.begin(); it != str.end(); ++it) {
        for (auto itList = list.begin(); itList != list.end(); ++itList) {
            std::cout << str << std::endl;
            if (itList->first == str) {
                std::cout << itList->first << std::endl;
            }
        }

    }
}