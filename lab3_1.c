#include<stdio.h>
int plus(int num[5])
{
    int sumz=0;
    for(i=0; i<5; i++)
    {
        sumz+=num[i]
    }
    return sumz;
}
int main()
{
    int num[5],sum[6],end=-1;
    while(end<6)
    {
        for(i=0; i<5; i++)
        {
            scanf("%d",num[i]);
        }
        end++;
        sum[end]=plus(num);
    }
    for(i=0; i<5; i++)
    {
        if(sum[i])
    }
    return 0;
}
