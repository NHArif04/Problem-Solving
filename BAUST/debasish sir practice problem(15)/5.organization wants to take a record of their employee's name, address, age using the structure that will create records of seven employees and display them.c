#include<stdio.h>
//#include<stdlib.h>
struct record{
    char name[50],address[200];
    int age;
};
int main(){
    int numOFrecords;
    printf("Enter the number of records :");
    scanf("%d",&numOFrecords);
    struct record rec[numOFrecords];
    for(int i=0; i<numOFrecords; i++){
        printf("\nEnter the Name, Address, Age :\n");
        getchar();
        scanf("%[^\n]s",rec[i].name);
        getchar();
        scanf("%[^\n]s",rec[i].address);
        scanf("%d",&rec[i].age);
    }
    printf("\nDisplaying the %d records :\n",numOFrecords);
    for(int i=0; i<numOFrecords; ++i){
        printf("%d. Name: %s,\tAddress: %s,\tAge:%d\n\n",i+1,rec[i].name,rec[i].address,rec[i].age);
    }
return 0;
}