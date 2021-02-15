#include<stdio.h>
int main()
{
    int n,i,j,c=0,k=0;
    scanf("%d",&n);
    int p[n],t[n];
    scanf("%d %d",t[0],p[0]);
    for(i=1; i<n;)
    {
        if(c==0)
        {
            scanf("%d %d",t[i],p[i]);
            for(j=0; j<i; j++)
            {
                if(t[i]==t[j])
                {
                    p[i-1]+=p[i];
                    c++;
                }
            }
            i++
        }
        else
        {
            i--;
            scanf("%d %d",t[i],p[i]);
            for(j=0; j<i; j++)
            {
                if(t[i]==t[j])
                {
                    p[i-1]+=p[i];
                    k++;
                }
            }
            if(k==0)
                c--;
            else;
        }

    }
    return 0;
}
