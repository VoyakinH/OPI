#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#define N 100

int main()
{
    int n, rc;
    rc = input_n(&n);
    printf("%d", n);
    return 0;
}
