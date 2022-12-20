#include<stdio.h>
#include<stdlib.h>
struct record{
    char name[50],address[200];
    int age;
};
int main(){
    struct record *ptr;
    int numOFrecords;
    
    printf("Enter the number of records :");
    scanf("%d",&numOFrecords);
    ptr =( struct record *)malloc(numOFrecords * sizeof(struct record));
    
    for(int i=0; i<numOFrecords; ++i){
        printf("\nEnter the Name, Address, Age :\n");
        scanf("%[^\n]s%[^\n]s%d",(ptr + i)->name,(ptr + i)->address,&(ptr + i)->age);
    }

    printf("\nDisplaying the the %d records :\n",numOFrecords);
    
    for(int i=0; i<numOFrecords; ++i){
        printf("%d. Name: %s,\tAddress: %s,\tAge:%d\n\n",i+1,(ptr + i)->name,(ptr + i)->address,(ptr + i)->age);
    }
return 0;
}