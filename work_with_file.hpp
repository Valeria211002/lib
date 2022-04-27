//
//  work_with_file.hpp
//  i
//
//  Created by Леруни on 26.04.2022.
//

#ifndef work_with_file_hpp
#define work_with_file_hpp

#include <stdio.h>
#include <fstream>
#include <iostream>

using namespace std;


struct libr
{
    string surname;
    int year;
};

void open_lib_file();

void fill_lib_file();

void close_lib_file();

void file_answer();

#endif /* work_with_file_hpp */
