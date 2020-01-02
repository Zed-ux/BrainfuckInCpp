#include <iostream>
#include <vector>
#include <iostream>
#include <fstream>
#include "parser.hpp"

void Parser::parse(std::string const& line) {
    for (auto it = line.begin(); it != line.end(); ++it) {
        std::string str = getCommand(*it);
        lines.push_back(str);
    }
    std::filebuf fb;
    fb.open("test.txt", std::ios::out);
    std::ostream os(&fb);
    for (auto it = lines.begin(); it != lines.end(); ++it) {
        os << (*it);
    }
}

std::string Parser::getCommand(char command) {
    for (auto it = compare.begin(); it != compare.end(); ++it) {
        if (it->first == command) {
            return it->second;
        }
    }
    return "";
}