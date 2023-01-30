#include<stdio.h>
int main()
{
    int num,rev=0,temp;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("\nEntered number is not a Palindrome number.\n\n");
        return 0;
    }
    temp=num;
    while(temp!=0)
    {
        rev=rev*10+(temp%10);
        temp=temp/10;
    }
    if(num==rev)
        printf("\nEntered number is a Palindrome number.\n\n");
    else
        printf("\nEntered number is not a Palindrome number.\n\n");
    return 0;
}
