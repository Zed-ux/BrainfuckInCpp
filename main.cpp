#include "parseFile.hpp"
#include "parser.hpp"

int main() {
      ParseFile parser{};
      std::vector<std::string> data{"+[-->-[>>+>-----<<]<--<---]>-.>>>+.>>..+++[.>]<<<<.+++.------.<<-.>>>>+."};
      parser.getParse(data);
}