#include<stdio.h>
unsigned int p(unsigned int x)
{
    unsigned int c=0,a;
    for(a=2;a<=x/2;a++)
    {
        if(x%a==0)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    unsigned int x,c=0;
    scanf("%u",&x);
    while(1)
    {
        c=p(x);
        if(c==0)
        {
            printf("%u",x);
            break;
        }
        else
        {
            x--;
        }
    }
    return 0;
}
