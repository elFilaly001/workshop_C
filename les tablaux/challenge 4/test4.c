#include <stdio.h>

int main()
{

    int noteArray[5],i,sum=0 ;

    do
    {
        for( i=0; i<5; i++)
        {

            printf("entrez la note %d :",i+1);
            scanf("%d",&noteArray[i]);

            if(noteArray[i]<0 || noteArray[i]>20)
            {
                return 0;
            }
            sum=sum+noteArray[i];
        }


    }
    while(i<5);

        int lenght = sizeof(noteArray) / sizeof(noteArray[0]);

        float moyenne= sum/lenght;

        printf("la moyenne est : %.2f" , moyenne);


        for (i=0 ; i < 5 ; i++){
            printf("\n%d >> ",noteArray[i]);
            if(noteArray[i]<moyenne){
                printf("inferieure");
            }else if (noteArray[i]==moyenne){
                printf("inferieure");
            }else if (noteArray[i]> moyenne){
                printf("supperieure");
            }
        }
        int count=0;

        for(i=0 ; i<5 ; i++){
            if (noteArray[i]>moyenne){
                count++;
            }
        }
        printf("\n%d\n",count);

        int min=noteArray[0],index;

        for(i=0;i<5;i++){
            if (min > noteArray[i]){
            min=noteArray[i];
            index=i+1;
            }
        }
        printf("%d >> %d",index,min);

        int max=noteArray[0],index01;

        for(i=0;i<5;i++){
            if (noteArray[i] > max){
            max=noteArray[i];
            index01=i+1;
            }
        }
        printf("\n%d >> %d",index01,max);



    return 0;
}
