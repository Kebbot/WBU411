#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <cmath>
using namespace std;

// Перечисляемый тип
enum Seasons {
    WINTER,SPRING, SUMMER,AUTUMN
};
enum Months {
    JAN=1,FEB,MAR,APR,MAY,
    JUN,JUL,AUG,SEP,OCT,NOV,DEC
};
enum Signal {
    OFF,ON
};

// Указатели на функции - тема
int myFunc()
{
    return 10;
}
char* pool(char* str, int size)
{
    return str;
}

// Ключевое слово auto 
auto minFunc()
{
    auto a = 20;
    auto b = 10;
    if (a < b)
        return a + 10.5;
    else
        return b + 10.5;
}

int main() 
{
    SetConsoleOutputCP(1251); 
    SetConsoleCP(1251); 
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    
    //cout << myFunc << endl; //адрес фунции 
    //cout << &myFunc << endl;  //другой способ - адрес фунции

    ////Указатели на функции
    //int (*funcPtr)(); //создание указателя
    //funcPtr = &myFunc; //инициализация

    //char* (*funcPtr2)(char*, int); //создание указателя
    //funcPtr2 = pool;  //инициализация

    // Ключевое слово auto 
    auto num = 10; // целочисленный тип
    auto num2 = 4.5; // вещественный тип
    auto sum = 4.5 + 10; // выражение
    auto ptr = &sum; // указатель
    auto minf = minFunc();
    cout << minf;

    // Ключевое слово decltype 
    int x = 1.2;
    decltype(x) j;
   
    int y = 10;
    int& r = y;
    //decltype(r) xy;

   
    return 0;
}
