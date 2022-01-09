#include<stdio.h>
#include<conio.h>

int main()
{
    printf("Enter a number : ");
    int num;
    scanf("%d", &num);

    long factorial = 1;
    while (num > 1)
    {
        factorial *= num;
        num -= 1;
    }

    printf("The factorial of %d is %ld.\n", num, factorial);
}
