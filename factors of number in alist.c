#include<stdio.h>

int main()
{
    int x,k, i, j=0;
    int factors[101];

    printf("Enter a number: ");
    scanf("%d", &x);

    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            factors[j++]=i;
            printf("%d\t", i);
        }
    }
    getchar();
    for(k =0;k<j;++k)
    printf("%d\n",factors[k]);
}
