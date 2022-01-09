#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 5;

    while (num >= 0)
    {
        printf("Enter your number here : ");
        scanf("%d", &num);

        printf("You Entered : %d.\n", num);
    }
}
