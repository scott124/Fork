#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<unistd.h>
#include<sys/types.h>

int main(int argc, char ** argv)
{
    int x=0, i=0;
    for (i=0; i<3; i++)
    {
        fork();
        x=x+5;
    }
    printf("x=%d\n", x);
    return 0;
}

