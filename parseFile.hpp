#ifndef PARSE_FILE_HPP_
#define PARSE_FILE_HPP_

#include <vector>
#include <string>
#include "parser.hpp"

class ParseFile {
    public:
        void getParse(const std::vector<std::string> &file) {
            for (auto it = file.begin(); it != file.end(); ++it) {
                p.parse(*it);
            }
        }; 
    private:
        Parser p;
};

#endif