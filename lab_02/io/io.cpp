#include <fstream>
#include <iostream>
#include "io.h"

bool read_bin_file(std::unique_ptr<unsigned char []> &plain_buffer, int &file_size, std::string file_name)
{
    int success = true, buffer_size;
    std::ifstream file;

    if (file_name.empty()){
        std::cout << "Файл " << file_name << "пуст\n";
        return false;
    }
    std::cout << "file_name: " << file_name << "\n";
    file.open(file_name, std::ios::in | std::ios::binary);

    if (!file.is_open()){
        std::cout << "Ошибка открытия файла " << file_name << "\n";
        return false;
    }

    // define file size
    file.seekg(0, std::ios::end);
    file_size = file.tellg();
    file.seekg(0, std::ios::beg);

    if (file_size > 2048){
        file_size = 2048;
    }

    // read data from binary file
    plain_buffer = std::make_unique<unsigned char []>(file_size);
    file.read((char *)plain_buffer.get(), file_size);

    /*for (int i = 0; i < file_size; i++){
        std::cout << "код: " << static_cast<int>(buffer[i]) << "\n";
    }*/
 
    file.close();

    return success;
}

bool write_bin_file(std::string file_name){
    int error = false;
    std::ofstream file;
    file.open(file_name, std::ios::out | std::ios::binary | std::ios::app);

    if (!file.is_open()){
        std::cout << "Ошибка открытия файла " << file_name;
        error = true;
    }
    else{
        char buffer[50] = "fwefwggewag\0";
        file.write(buffer, 50);
        //std::cout << "Содержимое файла: " << buffer;
    }

    file.close();

    return error;
}