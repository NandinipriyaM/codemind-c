#include<stdio.h>
int main()
{
    int g,s,h;
    scanf("%d%d%d",&g,&s,&h);
    if(g>50)
    {
        printf("Gryffindor");
    }
    else if(s>50)
    {
        printf("Slytherin");
    }
     else if(h>50)
    {
        printf("Hufflepuff");
    }
    else
    {
        printf("NOTA");
    }
}