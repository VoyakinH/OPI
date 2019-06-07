#include <stdio.h>
#include <stdlib.h>
#define N 100

int input_n(int *n);

int main()
{
    int n, rc;
    rc = input_n(&n);
    if (rc == -1)
        return 1;
    if (rc == -2)
        return 2;
    return 0;
}
