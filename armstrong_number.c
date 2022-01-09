#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    printf("Enter the number : ");
    int num;
    scanf("%d", &num);

    int sum = 0;
    int copy = num;

    while (copy > 0)
    {
        sum += pow(copy % 10, 3);
        copy /= 10;
    }

    if (sum == num)
    {
        printf("The number is an Armstrong Number.\n");
        return 0;
    }
    printf("The number is not an Armstrong Number.\n");
}
