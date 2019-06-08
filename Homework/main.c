///\file
#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#define N 100

/*!
 *      \brief main
 *
 *      Функция вставляет сумм сумму цифр простого числа после простых чисел.
 *
 */
int main()
{
    int n, rc;
    rc = input_n(&n);
    if (rc == -1)
        return 1;
    if (rc == -2)
        return 2;
    int arr[N];
    if (input_arr(arr, n) == -1)
        return 3;
    if (insert(arr, &n) == -1)
        return 4;
    print_arr(arr, n);
    return 0;
}
