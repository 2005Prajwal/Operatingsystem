#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
printf("before fork\n");
pid_t p=fork();
if(p<0)
{
printf("fork failed\n");
}
else if(p==0)
{
printf("My is :%d\n",getpid());
printf("My parent id is:%d\n",getpid());
}
else
{
printf("My id is:%d\n",getpid());
printf("My child's id is :%d|n",p);
}
printf("done\n");
}

