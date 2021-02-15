#include<stdio.h>
int main()
{
    int num,sum=0,max=0,local=0,total,i,j;
    for(i=0; i<5; i++)
    {
        sum=0;
        for(j=0; j<4; j++)
        {
            scanf("%d",&num);
            sum+=num;
        }
        if(sum>max)
        {
            max=sum;
            local=i+1;
        }
    }
    printf("%d %d",local,max);
    return 0;
}
