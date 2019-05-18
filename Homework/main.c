#include <stdio.h>
#define N 100

int input_n(int *n)
{
    int x;
    if (scanf("%d", &x) != 1)
    {
        printf("Кол-во чисел введено неверно\n");
        return -1;
    }
    else
        if (x == 0)
        {
            printf("Пустой массив\n");
            return -2;
        }
        else
        {
            *n = x;
            return 0;
        }
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
    for (int i = 0; i < n; i++)
    {
        if (check(arr[i]) != -1)
        {
            for (int j = n - 1; j > i; j--)
                arr[j + 1] = arr[j];
            arr[i + 1] = check(arr[i]);
            k++;
            n++;
        }
    }
    if (k == 0)
    {
        printf("Простых чисел в массиве нет\n");
        return -1;
    }
    else
    {
        *n1 = n;
        return 0;
    }
}

void print_arr(int arr[N], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return;
}

int main(void)
{
    int n, rc;
    rc = input_n(&n);
    if (rc == -1)
        return 1;
    if (rc == -2)
        return 2;
    else
    {
        int arr[N];
        if (input_arr(arr, n) == -1)
            return 3;
        else
        {
            if (insert(arr, &n) == -1)
                return 4;
            else
                print_arr(arr, n);
        }
    }
    return 0;
}
