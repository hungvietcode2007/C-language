#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    
    srand(time(NULL));
    int max = 18, min = 3;
    int tong = rand() % ((max - min + 1) + min);

    printf("Welcom to taixiu\n");
    int choice;

    do{
        printf("\n1.Tai\n2.Xiu\n3.Exit\n");
        printf("Select your choice: "); scanf("%d", &choice);
        printf("\nResult: %d\n", tong);
        switch(choice){
            case 1:
                if(tong >= 10){
                    printf("You win\n");
                }else printf("You lose !\n");
                break;
            case 2:
                if(tong < 10){
                    printf("You win\n");
                }else printf("You lose\n");
                break;
            case 3:
                printf("Thank you !\n");
                break;
            default:
                printf("Invalid value ! Please choose 1-3\n");
        }
    }while(choice != 3);



    return 0;

}