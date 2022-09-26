#include <iostream>
#include <cstdlib>

#include "./io/io.h"
#include "./enigma/enigma.h"

int main(int argc, char *argv[])
{
    int error = EXIT_SUCCESS;
    
    if (argc != 2){
        std::cout << "Ошибка: необходимо указать 2 аргумента (имя программы + имя файла)";
        error = EXIT_FAILURE;
    }
    else
    {
        int file_size;
        std::unique_ptr<unsigned char []> plain_buffer;
        if (!read_bin_file(plain_buffer, file_size, argv[1])){
            std::cout << "Ошибка чтения файла " << argv[1] << ".\n";
            error = EXIT_FAILURE;
        }
        else{
            Enigma enigma;
            std::unique_ptr<unsigned char []> cipher_buffer, origin_buffer;

            //encryption
            cipher_buffer = enigma.encrypt(plain_buffer, file_size);

            /*for (int i = 0; i < file_size; i++){
                std::cout << "код: " << static_cast<int>(plain_buffer[i]) << " ";
                std::cout << "шифр: " << int(cipher_buffer[i]) << "\n";
            }*/

            enigma.reset();
            //decryption
            origin_buffer = enigma.encrypt(cipher_buffer, file_size);
            /*for (int i = 0; i < file_size; i++){
                std::cout << "шифр: " << int(cipher_buffer[i]) << " ";
                std::cout << "дешифрация: " << static_cast<int>(origin_buffer[i]) << "\n";
            }*/
        }
    }


    return error;
}