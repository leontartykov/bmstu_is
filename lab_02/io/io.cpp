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

    file.open(file_name, std::ios::in | std::ios::binary);

    if (file.fail()){
        std::cout << "Ошибка открытия файла на чтение" << file_name << "\n";
        return false;
    }

    // define file size
    file.seekg(0, std::ios::end);
    file_size = file.tellg();

    if (file_size == 0){
        std::cout << "Файл пуст \n";
        success = false;
    }
    else{
        file.seekg(0, std::ios::beg);

        if (file_size > MAX_FILE_SIZE){
            file_size = MAX_FILE_SIZE;
        }

        // read data from binary file
        plain_buffer = std::make_unique<unsigned char []>(file_size);
        file.read((char *)plain_buffer.get(), file_size);
    }
 
    file.close();

    return success;
}

bool write_bin_file(std::unique_ptr<unsigned char []> &cipher_buffer, int &buffer_size, std::string old_file_name){
    int error = false;
    std::string file_name = "file_name.bin";
    std::ofstream file;

    std::cout << "file_name: " << file_name << "\n";
    file.open(file_name, std::ios::out | std::ios::binary);

    if (!file.is_open()){
        std::cout << "Ошибка открытия файла на запись " << file_name << "\n";
        error = true;
    }
    else{
        for (int i = 0; i < buffer_size; i++){
            std::cout << cipher_buffer[i];
        }
        auto buffer_data = cipher_buffer.get();
        //char buffer_data[50] = "fefgefefe\0";
        file.write(reinterpret_cast<const char *>(buffer_data), buffer_size);
            
        if (!file.good())
        {
            std::cout << "There was an error while saving buffer data to file.";
        }
        //std::cout << "Содержимое файла: " << buffer;
    }

    file.close();

    return error;
}