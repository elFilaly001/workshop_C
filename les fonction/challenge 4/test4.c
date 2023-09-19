#include <stdio.h>

int max2 (int a,int b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int max4 (int a, int b,int c,int d)
{

    if (max2(a,b)< max2(c,d))
    {
         return max2(c,d);
    }
    else
    {
        return max2(a,b);
    }
}


int main ()
{
    int a,b,c,d;

    printf("1er nombre : ");
    scanf("%d", &a);
    printf("1er nombre : ");
    scanf("%d", &b);
    printf("1er nombre : ");
    scanf("%d", &c);
    printf("1er nombre : ");
    scanf("%d", &d);


    printf("max is : %d", max4(a,b,c,d));

}
