#include <stdio.h>

int main(){
    int i,j,k;
    for (i=0;i<=15;i++){
        for(j=0;i<5 && j<29;j++){
            if (j<(4-i) || j>(24+i)){
                printf("   ");
            }
            else{
                printf(" * ");
            }
        }
        for(k=0;i>4 && k<25;k++){
            if (k==4 || k==24){
                printf(" * ");}
            else if ( (i==6 || i==10 )&& ((k>=6 && k<=10) || (k>=18 && k<=22))){
                printf(" * ");
            }
            else if ( (i>6 && i<10 )&& ((k==6 || k==10) || (k==18 || k==22))){
                printf(" * ");
            }
            else if(i==8 && (k>=12 && k<=16)){
                printf(" * ");
            }
            else if(i>8 && i<15 && (k==12 || k==16)){
                printf(" * ");
            }
            else if (i==15 && k>=4){
                printf(" * ");
            }
            else{
                printf("   ");
            }
                 }
        printf("\n");
    }

    return 0;
}
