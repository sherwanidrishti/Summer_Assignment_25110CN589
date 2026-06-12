#include<stdio.h>

int armstrong(int n)
{
    int temp=n,sum=0,digit;

    while(n>0)
    {
        digit=n%10;
        sum=sum+digit*digit*digit;
        n=n/10;
    }

    if(temp==sum)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d",&n);

    if(armstrong(n))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}