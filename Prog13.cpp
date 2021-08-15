// Prog13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <Windows.h>
#define  MAX_QUANTITY   15  

//-----------------------------------------------------------------------------------------------
void Store_Data(double nab1[], double nab2[], double nab3[]);
void Print_Data(double nab1[], double nab2[], double nab3[]);
double Average_value(int index);
double Average_value_full();
double Max_value();
//-----------------------------------------------------------------------------------------------

double nabor1[5];
double nabor2[5];
double nabor3[5];
int length;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

//---------- Функция ввода исходного массива ------------------------

    Store_Data(nabor1, nabor2, nabor3);

//---------- Функция вывода исходного массива на экран ------------------------

    Print_Data(nabor1, nabor2, nabor3);

//---------- Функция вывода среднего значения по наборам на экран ------------------------

    for (int i = 1; i <= 3; i++)
    {
        Average_value(i);
    }
  
//---------- Функция вывода среднего значения всех наборов на экран ------------------------
    
    Average_value_full();

//---------- Функция вывода максимального значения всех наборов на экран ------------------------

    Max_value();

    return 0;
}

//-----------------------------------------------------------------------------------------------

void Store_Data(double nab1[], double nab2[], double nab3[])
{
    printf("Введите длину набора:\n");
    scanf_s("%d", &length);
    printf("Введите элементы первого набора:\n");
    for (int i = 0; i < length; i++)
    {
        scanf_s("%lf", &nabor1[i]);
    }

    printf("Введите элементы второго набора:\n");
    for (int j = 0; j < length; j++)
    {
        scanf_s("%lf", &nabor2[j]);
    }

    printf("Введите элементы третьего набора:\n");
    for (int k = 0; k < length; k++)
    {
        scanf_s("%lf", &nabor3[k]);
    }
}

//-----------------------------------------------------------------------------------------------

void Print_Data(double nab1[], double nab2[], double nab3[])
{
    printf("\n");
    printf("Исходный массив:\n");

    for (int i = 0; i < length; i++)
    {
        printf("%3.1f ", nab1[i]);
    }
    printf("\n");

    for (int j = 0; j < length; j++)
    {
        printf("%3.1f ", nab2[j]);
    }
    printf("\n");

    for (int k = 0; k < length; k++)
    {
        printf("%3.1f ", nab3[k]);
    }
    printf("\n");
}

//-----------------------------------------------------------------------------------------------

double Average_value(int index)
{
    double sum_nabor = 0;
    double aver_nabor = 0;

    if (index == 1)
    {
        for (int i = 0; i < length; i++)
        {
            sum_nabor += nabor1[i];
        }
        aver_nabor = sum_nabor / length;
        printf("Среднее первого набора = %3.1f\n", aver_nabor);
    }

    else if (index == 2)
    {
        for (int i = 0; i < length; i++)
        {
            sum_nabor += nabor2[i];
        }
        aver_nabor = sum_nabor / length;
        printf("Среднее второго набора = %3.1f\n", aver_nabor);
    }

    else
    {
        for (int i = 0; i < length; i++)
        {
            sum_nabor += nabor3[i];
        }
        aver_nabor = sum_nabor / length;
        printf("Среднее третьего набора = %3.1f\n", aver_nabor);
    }
    return aver_nabor;
}

//-----------------------------------------------------------------------------------------------

double Average_value_full()
{
    double sum_nabor = 0;
    double aver_nabor = 0;

        for (int i = 0; i < length; i++)
        {
            sum_nabor += nabor1[i];
        }
    
        for (int i = 0; i < length; i++)
        {
            sum_nabor += nabor2[i];
        }
       
        for (int i = 0; i < length; i++)
        {
            sum_nabor += nabor3[i];
        }
        aver_nabor = sum_nabor / MAX_QUANTITY;
        printf("Среднее всех наборов вместе = %3.1f\n", aver_nabor);
    
    return aver_nabor;
}

//-----------------------------------------------------------------------------------------------

double Max_value()
{
    double max_nabor1 = nabor1[0], max_nabor2 = nabor2[0], max_nabor3 = nabor3[0];
    double max_arr = 0;

    for (int i = 1; i < length; i++)
    {
        if (nabor1[i] > max_nabor1)
        {
           max_nabor1 = nabor1[i];
        }

        if (nabor2[i] > max_nabor2)
        {
            max_nabor2 = nabor2[i];
        }

        if (nabor3[i] > max_nabor3)
        {
            max_nabor3 = nabor3[i];
        }
    }
    
    if (max_nabor1 > max_nabor2 && max_nabor1 > max_nabor3)
    {
        max_arr = max_nabor1;
    }

    else if (max_nabor2 > max_nabor1 && max_nabor2 > max_nabor3)
    {
        max_arr = max_nabor2;
    }
    else
    {
        max_arr = max_nabor3;
    }
    printf("Максимальное значение = %3.1f\n", max_arr);

    return max_arr;
}