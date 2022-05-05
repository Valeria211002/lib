//
//  sort_func.cpp
//  i
//
//  Created by Леруни on 26.04.2022.
//

#include "sort_func.hpp"

#include <iostream>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <fstream>
using namespace std;


ifstream inputFile3;
string line;
vector<string> sortSName;


void sort_lib()

{
     inputFile3.open("/Users/leruni/Desktop/library.txt");

    cout << "Сортировка по имени автора: "<< endl;

     while (getline(inputFile3, line))
     {
         sortSName.push_back(line);
     }

     sort(sortSName.begin(), sortSName.end());

     //в приличном обществе за то форматирование, которое было у тебя
     //лишают премии и ставят двойки
     //напиши аналогично без использования итераторов - обычным перебором ++
     //в качестве результата создай массив, который верни, как результат работы функции
     //и выведи этот массив вне функции
     for (string& s : sortSName)
      cout << s << " "<< endl;

    inputFile3.close();

}


void sort_lib_year()
{

//???

}
