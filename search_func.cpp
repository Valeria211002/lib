//
//  search_func.cpp
//  i
//
//  Created by Леруни on 26.04.2022.
//

#include "search_func.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


string Input;
int Input2;
vector<string> Name;
vector<int> Year;
ifstream inputFile2;




void search_name()
{
    inputFile2.open("/Users/leruni/Desktop/library.txt");
    
    cout << "Введите имя автора: ";
    cin >> Input;
    cout << endl;

    copy(istream_iterator<string>(inputFile2),
    istream_iterator<string>(),
    back_inserter(Name));

    if (find(Name.begin(), Name.end(), Input) != Name.end())
        cout << "Автор, " << Input << ", найден\n"<< endl;
    else
        cout << "Автор, "<< Input <<",не найден\n"<< endl;
    inputFile2.close();
}

void search_year()
{
    
    inputFile2.open("/Users/leruni/Desktop/library.txt");
    
    cout << "Введите год рождения: ";
    cin >> Input2;
    cout << endl;

    copy(istream_iterator<int>(inputFile2),
    istream_iterator<int>(),
    back_inserter(Year));

    if (find(Year.begin(), Year.end(), Input2) != Year.end())
        cout << "Год рождения, " << Input2 << ",год найден\n"<< endl;
    else
        cout << "Год рождения, "<< Input2 <<",год не найден\n" << endl;
   
  
    inputFile2.close();
}
