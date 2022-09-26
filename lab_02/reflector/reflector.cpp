#include "reflector.h"
#include "../constants.h"

Reflector::Reflector(int seed)
{
    int len_half = COUNT_SYMBOLS / 2;
    std::array<int, (COUNT_SYMBOLS / 2)> second_half_seq;

    // init original sequence
    for (int i = 0; i < COUNT_SYMBOLS; i++){
        __original_seq[i] = i;
    }

    for (int i = 0; i < len_half; i++){
        second_half_seq[i] = COUNT_SYMBOLS - i - 1;
    }

    // shuffled sequence
    __shuffled_seq = __original_seq;
    std::shuffle(second_half_seq.begin(), second_half_seq.begin() + len_half, 
                std::default_random_engine(seed));

    for (int i = 0; i < len_half; i++){
        __shuffled_seq[i] = second_half_seq[i];
        __shuffled_seq[second_half_seq[i]] = i;
    }
}

int Reflector::forward(int index){
    return __shuffled_seq[index];
}