#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <map>
#include <string>

class Commands {
    public:
        Commands();
        void parse(const std::string &str);
    private:
        std::map<std::string, std::string> list = { 
            {">", "++p"},
            {"<", "--p"},
            {"+", "++*p"}, 
            {"-", "--*p"},
            {".", "putchar(*p)"},
            {",", "*p = getchar()"},
            {"[", "while (*p) {"},
            {"]", "}"}
        };
};

#endif