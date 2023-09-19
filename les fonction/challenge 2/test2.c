#include <stdio.h>

int Somme(int a,int b)
{
    int c=a+b;
}

int main()
{
    int a , b;

    printf ("entre a ");
    scanf ("%d", &a);
    printf ("entre b ");
    scanf ("%d", &b);

    printf("la somme est %d", Somme(a,b));

}
