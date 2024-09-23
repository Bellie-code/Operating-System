#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
printf("before fork()\n");
pid_t p=fork();
printf("Hi,I am a process with id:%d \n ",getpid());
}

