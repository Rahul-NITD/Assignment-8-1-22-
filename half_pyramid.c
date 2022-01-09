#include<stdio.h>
#include<conio.h>

int main()
{
    printf("Enter the height of the pyramid : ");
    int height;
    scanf("%d", &height);

    for (int i = 0; i < height; i++)
    {
        // White spaces
        for (int k = height; k > i; k--)
        {
            printf("  ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
