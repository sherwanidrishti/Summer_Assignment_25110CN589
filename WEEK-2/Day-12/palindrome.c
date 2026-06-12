#include<stdio.h>

int palindrome(int n)
{
    int temp=n,rev=0,digit;

    while(n>0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }

    if(temp==rev)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d",&n);

    if(palindrome(n))
        printf("Palindrome Number");
    else
        printf("Not Palindrome Number");

    return 0;
}