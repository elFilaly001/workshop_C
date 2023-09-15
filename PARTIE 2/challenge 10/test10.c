#include <stdio.h>
#include <time.h>

int main(){
    int jour,mois,anne;

    printf ("entrer votre date dd/mm/yyyy : \n");
    scanf ("%d %d %d",&jour,&mois,&anne);
    printf("%d /",jour);
    switch(mois)
    {
       case 1: printf("Janvier");
            break;
       case 2: printf("Fevrier");
            break;
       case 3: printf("Mars");
            break;
       case 4: printf("Avril");
            break;
       case 5: printf("Mai");
            break;
       case 6: printf("Juin");
            break;
       case 7: printf("Juillet");
            break;
       case 8: printf("Aout");
            break;
       case 9: printf("Septembre");
            break;
       case 10: printf("Octobre");
            break;
       case 11: printf("Novembre");
            break;
       case 12: printf("Decembre");
            break;
    }
    printf("/ %d",anne);



}
