#include<stdio.h>
int main()
{
int n;
printf("Enter the number of processors");
scanf("%d",&n);
int bt[n],wt[n],tat[n];
printf("Enter the burst time for %d processors \n",n);
for(int i=1;i<=n;i++)
{
   scanf("%d",&bt[i]);
}
wt[1]=0;
for(int i=2;i<=n;i++)
{
	wt[i]=wt[i-1]+bt[i+1];
}
for(int i=1;i<=n;i++)
{
	tat[i]=bt[i]+wt[i];
}
for(int i=1;i<=n;i++)
{
	printf("process %d   %d  %d  %d\n",i,bt[i],wt[i],tat[i]);
}
}