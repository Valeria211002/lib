//
//  search_func.cpp
//  Сюда лучше кратко записать о чём файл
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

//Почему и для чего мы объявляет эти переменные здесь?
//Вспомниай значение слова инкапсуляция и заноси их внутрь функции
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

    //что такое итератор, почему и для чего ты их здесь используешь?
    //Если сможешь убедить, что итератор здесь жизненно необходим, то в одной
    //фукнции можешь его использовать, а во второй - сделай реализацию на коленке, "велосипед"

    copy(istream_iterator<string>(inputFile2),
    istream_iterator<string>(),
    back_inserter(Name));

    //давай модифицируем программу - нужно внутри функции добавить получить результат
    //ввода пользователя, а выводить ВНЕ функции
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
