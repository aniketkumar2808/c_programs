/* Question1.- Write the program to compute the fibonacci series of the entered number. */
#include <stdio.h>
int main(){
    int num,first=0, second=1,third,temp=0;
    
    printf("Please enter any number, till you want to print fibonacci series\n");
    scanf("%d",&num);
    //printf("%d\n",0);
    
    for (int i=0; i<num; i++) {
        if(i<=1){
            third=i;
        }
        else{
            third=first+second;
        first=second;
        second=third;
        }
        printf("%d\n",third);
    }
    
    return 0;
}
