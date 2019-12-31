#ifndef PARSER_HPP_
#define PARSER_HPP_

#include <map>
#include <string>
#include <vector>

class Parser {
    public:
        void parse(std::string const& line);
    private:
        std::string getCommand(char command);
    private:
        std::vector<std::string> lines;
        std::map<char, std::string> compare = {
            {'>', "++p"}, 
            {'<', "--p"},
            {'+', "++*p"},
            {'-', "--*p"},
            {'.', "putchar(*p"},
            {',', "*p = getchar()"},
            {']', "while(*p) {"},
            {'[', "}"},
        };
};

#endif