#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#define N 100

int input_n(int *n)
{
    if (scanf("%d", *&n) != 1 || *n < 0 || *n > N)
    {
        printf("Кол-во чисел введено неверно\n");
        return -1;
    }
    else
        if (*n == 0)
        {
            printf("Пустой массив\n");
            return -2;
        }
    return 0;
}

int input_arr(int arr[N], int n)
{
    for (int i = 0; i < n; i++)
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Неправильный ввод\n");
            return -1;
        }
    return 0;
}

int summ(int x)
{
    int s = 0;
    while (x > 0)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int check(int x)
{
    int k = 0;
    x = abs(x);
    if (x == 0 || x == 1)
        return -1;
    for (int i = 1; i < x; i++)
        if (x % i == 0)
            k++;
    if (k == 1)
        return summ(x);
    else
        return -1;
}

int insert(int arr[N], int *n1)
{
    int k = 0;
    int n = *n1;
    int i = 0;
    while (i < n)
    {
        if (check(arr[i]) != -1)
        {
            for (int j = n - 1; j > i; j--)
                arr[j + 1] = arr[j];
            arr[i + 1] = summ(arr[i]);
            i++;
            k++;
            n++;
        }
        i++;
    }
    if (k == 0)
    {
        printf("Простых чисел в массиве нет\n");
        return -1;
    }
    *n1 = n;
    return 0;
}

void print_arr(int arr[N], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return;
}
