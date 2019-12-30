#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <map>
#include <string>

class Commands {
    public:
        Commands();
        void doCommand(const std::string& command);
    private:
       char getCommand(char const comm);
    private:
        std::map<char, std::string> list = { 
            {'>', "++p"},
            {'<', "--p"},
            {'+', "++*p"}, 
            {'-', "--*p"},
            {'.', "putchar(*p)"},
            {',', "*p = getchar()"},
            {'[', "while (*p) {"},
            {']', "}"}
        };
};

#endif