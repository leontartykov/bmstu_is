#ifndef _IO_H_
#define _IO_H_

#include <iostream>
#include <memory>

bool read_bin_file(std::unique_ptr<unsigned char []> &plain_buffer, int &file_size, std::string file_name);
bool write_bin_file(std::string file_name);

#endif