#include<stdio.h>
int main()
{
    int n,at[10],bt[10],wt[10],ta[10],status[10],min,gc=0,i,j,choice,process;
    printf("Enter the number of process\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)//read and store arrival and burst time in array
    {
        printf("Enter arrival and burst time for process %d\n",i);
        scanf("%d%d",&at[i],&bt[i]);
        status[i]=1;
    }
    printf("Enter your choice\t 1.FCFs\t 2.sjf\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:for(i=0;i<=n;i++)
        {
            min=99;
            for(j=0;j<=n;j++)
            {
                if(at[j]<min && status[j]==1)
                {
                    min=at[j];
                    process=j;
                }
            }
            wt[process]=gc-at[process];
            gc=gc+bt[process];
            ta[process]=gc-at[process];
            status[process]=0;
        }
        break;
        case 2:for(i=0;i<n;i++)
        {
            min=99;
            for(j=0;j<n;j++)
            {
                if(bt[j]<min && status[j]==1 && at[j]<=gc)
                {
                    min=bt[j];
                    process=j;
                }
            }
            int(process)=gc-at[process];

            gc=gc+bt[process];
            ta[process]=gc-at[process];
            status[process]=0;
        }
        break;
        default:break;
    }
}