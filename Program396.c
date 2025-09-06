#include<stdio.h>

void Display()
{
    static int i = 0 ;              //local static
 
    printf("Jay Ganesh... : %d \n",i);

    i++;

    Display();
}
int main()
{
    Display();
    return 0;
}