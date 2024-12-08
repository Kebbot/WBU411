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
void PrintMS(double a[], int size);

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

//перегрузка функций 
int MaxValMAss(int mass[], int size);
float MaxValMAss(float mass[], int size);
double MaxValMAss(double mass[], int size);

//перегрузка функций 
int sum(int a, int b)
{
    return a + b;
}
double sum(double a, double b)
{
    return a + b;
}
double sum(int a, double b)
{
    return a + b;
}
double sum(double a, int b)
{
    return a + b;
}

//Шаблон функций
template <typename T, typename K> T sum2(T N, K X);


int main() 
{
    SetConsoleOutputCP(1251); 
    SetConsoleCP(1251); 
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));


    /*const int size = 10;
    int arr[size];
    Add(arr, size);
    double arr2[size]
    {
        35.5,9.9,53.3,76.6,55.4,
        43.9,56.7,100.1,99,9
    };
    PrintMS(arr, size);
    cout << MaxValMAss(arr, size) << endl;
    PrintMS(arr2, size);
    cout << MaxValMAss(arr2, size) << endl;*/
    

    //int y;
    //int t = 10;
    //y = SQR(t + 8) - CUBE(t - 8);
    ////((t + 8) * (t + 8)) - (((t - 8) * (t - 8)) * (t - 8))
    //cout << sqrt(ABS(y));
    return 0;
    //след тема = поиск и сортировки
}
//Шаблон функций
template <typename T, typename K> T sum2(T N, K X)
{
    return N + X;
}
int MaxValMAss(int mass[], int size)
{
    int tmp = 0;
    for (int i = 0; i < size; i++)
    {
        if (mass[i] > tmp)
            tmp = mass[i];
    }
    return tmp;
}
float MaxValMAss(float mass[], int size)
{
    float tmp = 0;
    for (int i = 0; i < size; i++)
    {
        if (mass[i] > tmp)
            tmp = mass[i];
    }
    return tmp;
}
double MaxValMAss(double mass[], int size)
{
    double tmp = 0;
    for (int i = 0; i < size; i++)
    {
        if (mass[i] > tmp)
            tmp = mass[i];
    }
    return tmp;
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
void PrintMS(double a[], int size)
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