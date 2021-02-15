#include<stdio.h>

int main()
{
    int n,c=0,a,b,i,j=0;
    scanf("%d",&n);
    int m=n;
    while(1)
    {
        for(a=2; n>1; a++)
        {

            while(n%a==0)
            {
                for(b=2; b<=a/2; b++)
                {
                    if(a%b==0)
                    {
                        c++;
                    }
                }
                n/=a;
            }
            if(c>0)
                break;
            j++;
        }
        if(j==4)
        {
            j=1;
            break;
        }
    }
    if(j==0)
        printf("%d is not a Lucky Number.",m);
    else
        printf("%d is a Lucky Number.",m);

    return 0;
}
