#include <chrono>
#include <iostream>
#include "enigma.h"
#include "../rotor/rotor.h"
#include "../reflector/reflector.h"

Enigma::Enigma()
{
    int seed;
    for (int i = 0; i < COUNT_ROTORS; i++){
        seed = std::chrono::system_clock::now().time_since_epoch().count();
        __rotors[i] = Rotor(seed);
    }

    seed = std::chrono::system_clock::now().time_since_epoch().count();
    __reflector = Reflector(seed);
}

std::unique_ptr<unsigned char []> Enigma::encrypt(std::unique_ptr<unsigned char []> &plain_buffer, int &buffer_size){
    std::unique_ptr<int []> cipher_int_buffer = std::make_unique<int []>(buffer_size);
    std::unique_ptr<unsigned char []> cipher_char_buffer = std::make_unique<unsigned char []>(buffer_size);
    
    for (int i = 0; i < buffer_size; i++){
        cipher_int_buffer[i] = __encrypt_symbol(plain_buffer[i]);
        cipher_char_buffer[i] = static_cast<unsigned char>(cipher_int_buffer[i]);
    }

    return cipher_char_buffer;
}

int Enigma::__encrypt_symbol(int plain_symbol){
    int encrypted = plain_symbol;
    for (int j = 0; j < COUNT_ROTORS; j++){
        encrypted = __rotors[j].forward(encrypted);
    }

    encrypted = __reflector.forward(encrypted);

    for (int j = COUNT_ROTORS - 1; j >= 0; j--){
        encrypted = __rotors[j].backward(encrypted);
    }

    __rotors[0].rotate();

    for (int j = 1; j < COUNT_ROTORS; j++){
        if (__rotors[j - 1].is_full_cycle()){
            __rotors[j].rotate();
        }
    }

    return encrypted;
}

void Enigma::reset(){
    for (int i = 0; i < COUNT_ROTORS; i++){
        __rotors[i].reset();
    }
}

void Enigma::output_rotor_values(){
    for (int i = 0; i < COUNT_ROTORS; i++){
        __rotors[i].output_values();
    }
}