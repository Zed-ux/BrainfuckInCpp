#ifndef OPCODE_HPP
#define OPCODE_HPP

#define INFINITELY_LARGE_SIZE 30000

class Opcode {
    public:
        void add_op_code(char op) {
        };
    private:
        char infinitely_large_size[INFINITELY_LARGE_SIZE];
        char *current = infinitely_large_size;
        char *ptr = infinitely_large_size;
};

#endif