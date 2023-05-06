#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1,k=1,z=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<s;j++) printf(" ");
        for(int j=1;j<=k;j++) printf("%d",z);
        s--;
        z++;
        k++;
        printf("\n");
    }
    return 0;
}