#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        if(i%2==0)
        {
            printf("%d-even\n",i);
        }
        else
        {
            printf("%d-odd\n",i);
        }
    }
    return 0;
}