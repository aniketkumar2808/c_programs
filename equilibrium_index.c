/*Equilibrium Index of an Array (using O(n) complexity)*/

#include <stdio.h>
int main(){
    int i,flag=0, leftSum=0, sum=0, arr[7];
    
    for(i=0; i<7; i++){
        scanf("%d", &arr[i]);
    }
    
    
    for(i=0; i<7; i++){
        sum=sum+arr[i];
    }
    
    
    for(i=0; i<7; i++){
        sum=sum-arr[i];
        if(leftSum==sum){
            printf("%d",i);
            flag=1;
            break;
        }
        leftSum=leftSum+arr[i];
    }
    
    if(flag==0) printf("\n-1\n");
    
    return (0);
}
