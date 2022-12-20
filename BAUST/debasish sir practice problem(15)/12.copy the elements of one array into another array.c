#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array you want to copy : ");
    scanf("%d",&size);
    int a[size],b[size];
    for(int i=0;i<size;i++){
        printf("\nEnter the value for %d index : ",i);
        scanf("%d",&a[i]);
    }
    printf("\nDuplicate array's element is : ");
    for(int i=0;i<size;i++){
        b[i]=a[i];
        printf("%d ",b[i]);    
    }
return 0;
}