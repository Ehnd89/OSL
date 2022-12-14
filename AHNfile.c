
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
int child1, child2;
child1=fork();
if(child1==0)
{
sleep(1);
printf("Child(1): Pid is %d, PPid is %d",getpid(),getppid());
printf("\n");
}
else
{
child2=fork();
if(child2==0)
{
sleep(2);
printf("Child(2): Pid is %d, PPid is %d",getpid(),getppid());
printf("\n");
}
else
{
sleep(4);
printf("Parent: Pid is %d",getpid());
printf("\n");
}
}
return 0;
}
