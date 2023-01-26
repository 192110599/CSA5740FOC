#include<stdio.h>

int main()
{
    int num;
  printf("Enter the number:");
    scanf("%d",&num);
    if(num == 0)
        printf("Neither positive nor negative");
    else if(num < 0)
        printf("Negative");
    else
        printf("Positive");
     
    return 0;
}
