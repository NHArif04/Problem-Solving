#include<stdio.h>
#include<limits.h>
main(){
    int index,max=INT_MIN,size;
    printf("Enter the size of an array to take input:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("\nEnter value for %d index :",i);
        scanf("%d",&arr[i]);
        if(max<arr[i]){
            max=arr[i];
            index=i;
        }
    }
    printf("\nThe biggest number of the array is: %d\nIndex of the biggest number is: %d",max,index);
return 0;
}