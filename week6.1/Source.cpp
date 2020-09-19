#include<stdio.h>
int main() 
{
    int num, numsum;
    int i, j = 1;
    printf("Enter your odd num :");
    scanf_s("%d", &num);
    numsum = (num * 2) - 1;
    if (num % 2 != 0) {
        for (int row = 1; row <= numsum; row++)
        {
            i = 1;
            for (int col = 1; col <= numsum; col++)
            {
                printf((i <= j) ? "*" : " ");
                col >= num ? i-- : i++;
            }
            row >= num ? j-- : j++;
            printf("\n");
        }
    }
    return (0);
}