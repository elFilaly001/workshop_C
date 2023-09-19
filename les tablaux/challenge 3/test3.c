#include<stdio.h>

int main ()
{

    int numArray[10];

    for (int i=0 ; i < 10 ; i++)
        printf ("entrer votre nombre : ");
        scanf("%d", &numArray[i]);
    }

    for (int i=0 ; i<10 ; i++)
    {
        for (int j=i+1; j<10 ; j++)
        {
            if (numArray[i]<numArray[j])
            {
                int swap = numArray[i];
                numArray[i]=numArray[j];
                numArray[j]=swap;
            }
        }
    }
    for(int i= 0 ; i<10 ; i++)
    {
        printf("  %d  \n", numArray[i]);
    }

}


