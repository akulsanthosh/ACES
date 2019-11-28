#include <stdio.h>

void main(){
    int num=1;
    while(num<3){
        switch(num){
            case 1:
            printf("Case 1 ");
            break;

            case 2:
            printf("Case 2");
            num++;
            break;
            case 3:
            printf("Case 3");
            break;
            default:
            printf("Default");
        }

    }
    
}