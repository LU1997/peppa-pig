#include <stdio.h>
void  welcome();
int main()
{
   
    init();
}

void init()
{
    char cont;
    printf("write Y to continu\n");
    scanf("%c",&cont);
    if(cont=='Y')
    {
      
      welcome();
    }
    else
    {
        printf("error");
    }
}
