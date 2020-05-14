#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int k = 9;
    int *p = &k;
    printf("%p", p);
}