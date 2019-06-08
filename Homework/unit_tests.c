#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"
#define N 100

int summ_must_return_correct_summ()
{
    int a[4] = {13, 183, 0, 71};
    int expected[4] = {4, 12, 0, 8};
    int actual;
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        actual = summ(a[i]);
        if (actual == expected[i])
            count++;
    }
    if (count == 4)
        printf("\nSumm function: OK\n");
    else
        printf("Summ function: Failed\n");
    printf("Tests passed %d of 4\n\n", count);
    if (count == 4)
        return 1;
    return 0;
}

int check_must_return_correct_result()
{
    int a[4] = {0, 1, 13, 4};
    int expected[4] = {-1, -1, 4, -1};
    int actual;
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        actual = check(a[i]);
        if (actual == expected[i])
            count++;
    }
    if (count == 4)
        printf("Check function: OK\n");
    else
        printf("Check function: Failed\n");
    printf("Tests passed %d of 4\n\n", count);
    if (count == 4)
        return 1;
    return 0;
}

int insert_must_put_summ_of_simples()
{
    int a[4] = {0, 1, 13, 2};
    int expected_arr[5] = {0, 1, 13, 4, 2};
    int expected_n = 6;
    int n = 4;
    int count = 0;
    int actual = insert(a, &n);
    if (actual == 0 && memcmp(a, expected_arr, 5) == 0 && n == expected_n)
        count++;
    if (count == 1)
        printf("Insert function: OK\n");
    else
        printf("Insert function: Failed\n");
    printf("Tests passed %d of 1\n\n", count);
    if (count == 1)
        return 1;
    return 0;
}

int main()
{
    int count = 0;
    count += summ_must_return_correct_summ();
    count += check_must_return_correct_result();
    count += insert_must_put_summ_of_simples();
    printf("Test functions passed %d of 3\n", count);
    return 0;
}
