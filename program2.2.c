#include<stdio.h>
int main()
{
int n;
printf("Enter the number of processors");
scanf("%d",&n);
int p[n],bt[n],wt[n],tat[n];
printf("Enter the burst time for %d processors \n",n);
for(int i=1;i<=n;i++)
{
   p[i]=i;
   scanf("%d",&bt[i]);
}
//sorting
int temp;
for(int i=1;i<=n;i++)
{
	for(int j=i+1;j<=n;j++)
	{
		if(bt[i]>bt[j])
		{
		temp=bt[i];
		bt[i]=bt[j];
		bt[j]=temp;
		
		temp=p[i];
		p[i]=p[j];
		p[j]=temp;
		}
	}
}
wt[1]=0;
for(int i=2;i<=n;i++)
{
	wt[i]=wt[i-1]+bt[i-1];
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
