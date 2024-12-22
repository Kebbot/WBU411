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

int LineSearch(int array[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
            return i;
    }
    return -1;
}

template <class T>
void selectSort(T arr[], int size)
{
    int i, j, k; //создаем отдельно для сохранения результатов во вне цикла
    T tmp; //временная переменная
    for (i = 0; i < size; i++)
    {
        k = i; // стартовое значение индекса
        tmp = arr[i]; //стартовое значение
        for ( j = i+1; j < size; j++)
        {
            if (arr[j] < tmp)
            {
                k = j; //индекс наименьшего числа
                tmp = arr[j]; // само наименьшее значение
            }
        }
        if (k != i) //если да - меняем местами
        {
            arr[k] = arr[i];
            arr[i] = tmp;
        }
    }
}

template <class T>
void bubbleSort(T arr[], int size)
{
    int i, j, k; //создаем отдельно для сохранения результатов во вне цикла
    T tmp; //временная переменная
    for (i = 0; i < size; i++)
    {
        for ( j = size-1; j > i; j--)
        {
            if (arr[j - 1] > arr[j])
            {
                tmp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

template <class T>
void insertSort(T arr[], int size)
{
    T tmp;
    int i, j;
    for (i = 0; i < size; i++)
    {
        tmp = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > tmp; j--)
            arr[j + 1] = arr[j];
        arr[j + 1] = tmp;
    }
}

long int Fact(long int N)
{
    if (N < 1) return 0;
    else if (N == 1) return 1;
    else return N * Fact(N - 1);
}
long int Fact2(long int N)
{
    long int F = 1;
    for (int i = 2; i <= N; i++)
    {
        F *= i;
    }
    return F;
}

int binarySreatch(int a[], int Lb, int Rb, int key)
{
    int M; //значение середины
    while (1)
    {
        M = (Lb + Rb) / 2; //вычисление середины массива
        if (key < a[M])//если ключ меньше середины
            Rb = M - 1; // правую сторону меняем на (середина -1)
        else if (key > a[M])//если ключ больше середины
            Lb = M + 1;// левую сторону меняем на (середина +1)
        else
            return M; //если key == середина
        if (Lb > Rb)
            return -1;
    }
}

template <class T>
void quickSort(T a[], long N)
{
    long i = 0, j = N-1;
    T tmp, p;
    p = a[N / 2]; //центральный элемент
    do {
        while (a[i] < p)i++;
        while (a[j] > p) j--;
        if (i <= j) {
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++; j--;
        }
    } while (i <= j);
    if (j > 0)quickSort(a, j+1);
    if (N > i) quickSort(a + i, N - i);
}


int main() 
{
    SetConsoleOutputCP(1251); 
    SetConsoleCP(1251); 
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    
   

   /* const int size = 11;
    int arr[size];
    int key, ind;
    for(int i = 0; i < size; i++)
    {
        arr[i] = 1 + rand() % (100 - 1);
        cout << arr[i] << ' ';
    }cout << endl << endl;
    quickSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }cout << endl << endl;*/
   /* cout << "Введите искомое число: ";
    cin >> key;
    ind = binarySreatch(arr, 0, size, key);
    cout << "index - " << ind;*/
    return 0;
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