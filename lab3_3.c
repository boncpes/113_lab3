#include<stdio.h>
int main()
{
    unsigned int k,a;
    scanf("%d",&k);
    for(a=2;k!=1;a++)
    {
        while(k%a==0)
        {
            printf("%d\n",a);
            k/=a;
        }
    }
    printf("0");
    return 0;
}
