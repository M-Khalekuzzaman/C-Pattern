#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter an integer number of N:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         for(j=1;j<=i;j++)
            printf("* ");
         printf("\n");
    }

    getch();
}
