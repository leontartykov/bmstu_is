#ifndef _REFLECTOR_H_
#define _REFLECTOR_H_

#include <array>
#include "../constants.h"

class Reflector
{
    private:
        std::array<int, COUNT_SYMBOLS> __original_seq, __shuffled_seq;
    public:
        Reflector() = default;
        Reflector(int seed);
        ~Reflector() = default;

        int forward(int index);
};

#endif