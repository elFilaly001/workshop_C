#include <stdio.h>

int PGCD(int a, int b )
{
    int r = a%b;

    if (r==0)
    {
        return b;
    }
    else
    {
        return PGCD(b,r);
    }
}


int main()
{
    int a, b;
    do
    {
        printf("\'A\' DOIS ETRE SUPPERIEUR A \'B\' \n");
        printf("entrer votre premier nombre :");
        scanf ("%d",&a);
        printf("entrer votre deuxieme nombre :");
        scanf ("%d",&b);
    }
    while(a<b);

        printf("%d", PGCD(a,b));;

}
