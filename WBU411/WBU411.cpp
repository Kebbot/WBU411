#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <cmath>
using namespace std;


int main() 
{
    SetConsoleOutputCP(1251); 
    SetConsoleCP(1251); 
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    
    int row = 5;
    int** mass = new int* [row];
    int col[5];
    
    for (int i = 0; i < row; i++)
    {
        cout << "Введите размерность " << i + 1 << " строки: ";
        cin >> col[i];
        mass[i] = new int[col[i]];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col[i]; j++)
        {
            mass[i][j] = rand() % 100;
            cout << mass[i][j] << ' ';
        }
        cout << endl;
    }
   
    return 0;
}
//указатель_на_тип = new имя_типа (инициализатор)
//след тема = перечисляемые типы (урок 15)