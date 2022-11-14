#include<stdio.h>
#include<conio.h>

void main()
{
    char ch;
    printf("Enter any charater");
    scanf("%c",char);
    if (ch>= 'a' && ch <='z')
        printf("lower case");
    else if (ch>= 'A' && ch <='Z')
        printf("Upper case");
    else
        printf("Invalid Input");
getch();
}