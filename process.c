#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

int main()
{
    if (fork() == 0)
    {
        printf("I am the child. My PID is %d\n", getpid());
    }
    else
    {
        printf("I am the parent. My PID is %d\n", getpid());
    }
}