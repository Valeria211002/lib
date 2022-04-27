//
//  work_with_file.cpp
//  i
//
//  Created by Леруни on 26.04.2022.
//

#include "work_with_file.hpp"
#include <iostream>
#include <fstream>

using namespace std;

ofstream inputFile;


void open_lib_file()
{
    cout << "Открываем файл: библиотека" << endl;
    
    inputFile.open("/Users/leruni/Desktop/library.txt");
}

void fill_lib_file()
{
    inputFile << "Пушкин , 1799 \nТолстой , 1828;\nЕсенин , 1895";
}

void close_lib_file()
{
    cout << "Закрываем файл" << endl;
    
    inputFile.close();
    
}

void file_answer()
{
    cout << "Цель: поиск фамилии в файле и вывод его" << endl;
}
