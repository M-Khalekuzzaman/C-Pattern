
#include<stdio.h>
int main()
{
    int number,row,col;
    printf("Enter an integer number :");
    scanf("%d",&number);
    for(row=1;row<=number;row++)
    {

        for(col=1;col<=number-row;col++)
                printf(" ");
        for(col=1;col<=2*row-1;col++)
               printf("*");
               printf("\n");



    }
    getch();
}

