#include<stdio.h>
int main()
{
    int num[4],sum[5],max=0,local=0,i,j,plus;
    for(i=0; i<5; i++)
    {
        plus=0;
        scanf("%d %d %d %d",&num[0],&num[1],&num[2],&num[3]);
        for(j=0; j<4; j++)
        {
            plus=plus+num[j];
        }
        sum[i]=plus;
    }
    for(i=0; i<6; i++)
    {
        if(i==0)
            max=sum[i];
        else if(sum[i]>max)
            max=sum[i];
    }
    for(i=0; i<5; i++)
    {
        if(max==sum[i])
        {
            local=i+1;
            break;
        }
    }
    printf("%d %d",local,max);
    return 0;
}
