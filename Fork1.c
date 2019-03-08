#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
void func(int *input)
{
    (*input)++;
}
int main(int argc, char ** argv)
{
    pid_t pid;
    int k = 3;

    pid = fork();

    if(pid == 0)
    {
        func(&k);
        printf("[child] %d\n",k);
    }
    else {

        wait(NULL);
        func(&k);
        printf("[parent] %d\n",k);
        exit(0);
    }

    

}

