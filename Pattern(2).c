#include<stdio.h>
int main()
{
    int number,row,col;
    printf("Enter an integer number :");
    scanf("%d",&number);
    for(row=1;row<=number;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf(" %d ",col);

        }
             printf("\n");
    }
    getch();
}
