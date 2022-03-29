#include <stdio.h>

int main(){
  
  
  
  int guess = 0;
     int trial = 0;

     while(guess != 5 && trial<3 ){
        printf("Guess a number: ");
        scanf("%d",&guess);

        if(guess!= 5 && trial!=2){
                printf("Try again!\n");

        }else if(guess == 5){
            printf("You won!");}
         else if(guess!= 5 && trial==2){
            printf("You lost!");;
         }

        trial++;
     }
  
  
  
  
  return 0;




}
