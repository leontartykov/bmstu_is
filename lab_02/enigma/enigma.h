#ifndef _ENIGMA_H_
#define _ENIGMA_H_

#include <memory>
#include "../rotor/rotor.h"
#include "../reflector/reflector.h"

class Enigma
{
    private:
        int __seed;
        Rotor __rotors[COUNT_ROTORS]; // 0 - fast, 1 - middle, 2 - slow
        Reflector __reflector;

        int __encrypt_symbol(int plain_symbol);
    public:
        Enigma();

        ~Enigma() = default;
        std::unique_ptr<unsigned char []> encrypt(std::unique_ptr<unsigned char []> &plain_buffer, int &buffer);
        void reset();
        void output_rotor_values();
};

#endif