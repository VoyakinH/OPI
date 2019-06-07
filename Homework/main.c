#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#define N 100

int input_n(int *n);
int input_arr(int arr[N], int n);
int summ(int x);
int check(int x);
int insert(int arr[N], int *n1);
void print_arr(int arr[N], int n);

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
