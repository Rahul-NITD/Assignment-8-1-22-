#include<stdio.h>
#include<conio.h>

int main()
{
    printf("Enter height of the pyramid : ");
    int height;
    scanf("%d", &height);

    for (int i = 0; i < height; i++)
    {
        // white spaces
        for (int k = height; k > i; k--)
        {
            printf("  ");
        }
        // left half of triangle
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        // right half
        for (int l = 1; l < i; l++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
