#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <cmath>
using namespace std;

struct date
{
    int day; // День
    int month; // Месяц
    int year; // Год
    int weekday; // День Недели
    char mon_name[15]; // Название месяца
} OtherBirthday, x,ptr; // Можно создать глобальные объекты структуры (Необязательно).

struct person
{
    char name[55];
    date Birthday;
};

struct Test // 40 байт(а)
{
    char c;     // 1 байт(а)
    int i;      // 4 байт(а)
    double d;   // 8 байт(а)
    double p;   // 8 байт(а)
    int f;      // 4 байт(а)
    double q;   // 8 байт(а)
}; // итого: 33 байт(а)

int main() 
{
    SetConsoleOutputCP(1251); 
    SetConsoleCP(1251); 
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    
    /*date myBirthday = { 20,7,1981,1,"July" };
    cout << "__________MY BIRTHDAY__________\n\n";
    cout << "DAY: " << myBirthday.day << endl;
    cout << "MONTH: " << myBirthday.month << endl;
    cout << "YEAR: " << myBirthday.year << endl;
    cout << "WEEKDAY: " << myBirthday.weekday << endl;
    cout << "MONTH NAME: " << myBirthday.mon_name << endl;

    date Birthday;
    cout << "__________YOUR BIRTHDAY__________\n\n";
    cout << "DAY ?: ";
    cin >> Birthday.day;
    cout << "MONTH ?: ";
    cin >> Birthday.month;
    cout << "YEAR ?: ";
    cin >> Birthday.year;
    cout << "WEEKDAY ?: ";
    cin >> Birthday.weekday;
    cout << "MONTH NAME ?: ";
    cin.getline(Birthday.mon_name, 15);
    cin.getline(Birthday.mon_name, 15);

    cout << "\n\n__________BIRTHDAY__________\n\n";
    cout << "DAY: " << Birthday.day << endl;
    cout << "MONTH: " << Birthday.month << endl;
    cout << "YEAR: " << Birthday.year << endl;
    cout << "WEEKDAY: " << Birthday.weekday << endl;
    cout << "MONTH NAME: " << Birthday.mon_name << endl << endl;*/

    person pers = { "Нуптуллин Арман",{5,5,2005,5,"Май"}};
    //cout << pers.Birthday.mon_name << endl;

   /* cout << sizeof(int) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(bool) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(pers) << endl;
    cout << sizeof(person) << endl;
    cout << sizeof(date) << endl;*/
    cout << sizeof(Test) << endl;
   
    return 0;
}
