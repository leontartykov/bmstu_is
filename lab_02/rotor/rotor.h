#ifndef _ROTOR_H_
#define _ROTOR_H_

#include <array>
#include "../constants.h"
#define COUNT_ROTORS 3

class Rotor
{
    private:
        int __offset = 0; // rotation symbol offset
        bool __full_cycle = false;
        std::array<int, COUNT_SYMBOLS> __original_seq, __shuffled_seq;

        void __reverse(int i, int j);

    public:
        Rotor() = default;
        Rotor(int seed);
        explicit Rotor(const Rotor &rotor);

        ~Rotor() = default;

        void reset();
        int forward(int index);
        int backward(int index);
        
        void rotate();
        bool is_full_cycle();
        
        void output_orig_seq();
        void output_shuffled_seq();

        void output_values();
};

#endif