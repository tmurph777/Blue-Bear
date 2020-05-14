#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

int main()
{
    fork();
    printf("Hello World, %d\n", getpid());
}