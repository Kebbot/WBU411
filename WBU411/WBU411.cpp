#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;
#define SQR(X) ((X) * (X))
#define CUBE(X) (SQR(X) * (X))
#define ABS(X) (((X) < 0)? -(X):(X))


int po = 5; //глабальная переменная

//Возвращение рандомного числа
int RD(int a, int b);
//заполнение одномерного массива рандомным числом
void Add(int a[], int size);
//отображение одномерного массива
void PrintMS(int a[], int size);
void MaxMS(int a[][5], int size, int mass[]);
//заполнение многомерного массива рандомным числом
void Add2(int a[][5], int size);
//отображение многомерного массива
void PrintMS2(int a[][5], int size);

//использования статической переменной
void SomeFunc()
{
    static int a = 0;
    a++;
    cout << a << endl;
}

//Встраиваемая функция
inline int randFormul(int min = 0, int max = 10)
{
    return min + rand() % (max - min);
}



int main() 
{
    SetConsoleOutputCP(1251); 
    SetConsoleCP(1251); 
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    
    int y;
    int t = 10;
    y = SQR(t + 8) - CUBE(t - 8);
    cout << sqrt(ABS(y));
    return 0;
}

//Возвращение рандомного числа
int RD(int a, int b)
{
    return a + rand() % (b - a);
}
//заполнение одномерного массива рандомным числом
void Add(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        a[i] = RD(0, 50);
    }
}
//отображение одномерного массива
void PrintMS(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
}

void MaxMS(int a[][5], int size, int mass[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (a[i][j] > mass[i])
                mass[i] = a[i][j];
        }
    }
}
//заполнение многомерного массива рандомным числом
void Add2(int a[][5], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            a[i][j] = RD(1, 100);
        }
    }
}
//отображение многомерного массива
void PrintMS2(int a[][5], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl << endl;
}