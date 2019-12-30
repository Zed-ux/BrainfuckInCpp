#include <iostream>
#include "command.hpp"

Commands::Commands() {};

void Commands::doCommand(const std::string& comm) {
    for (auto it = comm.cbegin(); it != comm.cend(); ++it) {
        //std::cout << *it << std::endl;
        char comms = getCommand(*it);
    }
}

char Commands::getCommand(char const comm) {
    for (auto it = list.begin(); it != list.end(); ++it) {
        std::cout << "list" << it->first << it->second << std::endl;
        return it->first;
    }
    return '\0';
}