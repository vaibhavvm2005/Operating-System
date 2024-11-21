#include<stdio.h>
#include<unistd.h>
#include <sys/wait.h>
int main(void)
{
    pid_t pid;
    int status;
    int n=20;
    pid=fork();
    if(pid==-1)
    {
        //if fork returns -1,there was an error!
        return(1);
    }
    printf("\n Fork successfull!\n");
    if(pid==0)
    {
        n=n*10;
        printf("child:I'm the child,my process id is:%d\n",getpid());
        execl("/bin/ls","ls","-1",/,home/student",(char *)0);
        printf("child;My parent process id is:%d\n",getppid());
        return(0);
    }
    else if(pid>0)
    {
    printf("parent :I'm the parent ,my process id  is %d\n",getpid());
    }
    n=n*2;
    printf("parent:value of n=%d\n",pid);
    if(WIFEXITED(status))
    {
    printf("parent:child process exited with %d\n",WEXITSTATUS(status));
    }
    }
    return(0);
    }
    