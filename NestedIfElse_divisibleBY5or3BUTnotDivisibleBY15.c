#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    // if (n % 5 == 0 || n%3 == 0)
    // {
    //     if (n % 15 == 0)
    //         printf("The number is divisible by 5 and 3 but not fifteen.");
    //     else
    //         printf("The number is divisible by 15.");
    // }
    // else
    //     printf("The number is not matching the required condition.");
    if((n%5 == 0 || n%3 == 0) && n%15!= 0)
    {
        printf("The number is divisible by 5 and 3 but not fifteen.");
    }
    else
    {
      printf("The number is not matching the required condition.");  
    }
    return 0;
}