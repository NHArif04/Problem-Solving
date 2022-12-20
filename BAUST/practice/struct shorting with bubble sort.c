#include<stdio.h>
#include<conio.h> //to use screen clear command without this header file clrscr() won't work
//#include<stdlib.h> //this header file is not in use in this programe so i hide it this header file will be in used whenever we use pointer funtion malloc(),calloc(),.......
struct record {
    char name[50],id[14],phone[11];
    float cgpa;
};
int main(){
    freopen("input_structure.txt","r",stdin);
    freopen("output_structure.txt","w",stdout);
    int numOFrecords;
    printf("Number of students : ");
    scanf("%d",&numOFrecords);
    struct record rec[numOFrecords],short_struct; //declaring structure type array and a variable which contains name, id, phone & cpga
    for(int i=0;i<numOFrecords; ++i){
        printf("\nStudent %d:\n",i+1);
        printf("Name: ");
        getchar();
        scanf("%[^\n]s",rec[i].name);
        printf("ID: ");
        getchar();
        scanf("%s",rec[i].id);
        printf("CGPA: ");
        getchar();
        scanf("%f",&rec[i].cgpa);
        printf("Phone: ");
        getchar();
        scanf("%s",rec[i].phone);
        getchar();
        system("cls"); //defined in conio.h header file
    }
    for(int i=1;i<numOFrecords;i++){ //this loop is used to perform bubble short the data accordion to the cgpa
        for(int j=0;j<numOFrecords-i;j++){
            if(rec[j].cgpa<rec[j+1].cgpa){
                short_struct=rec[j];
                rec[j]=rec[j+1];
                rec[j+1]=short_struct;
            }
        }
    }

    printf("\nDisplaying the best 3 records:\n");
    for(int i=1; i<=3; i++){
        if(i==1 && numOFrecords>=i){
            printf("1st. - %s, - %s, - %.2f\n\n",rec[0].name,rec[0].id,rec[0].cgpa);
        }               //in printf i use % -x s to set-width to make sure the output is justified with respect to left side
        else if(i==2 && numOFrecords>=i){
            printf("2nd. - %s, - %s, - %.2f\n\n",rec[1].name,rec[1].id,rec[1].cgpa);
        }               //if i use (+)ve x then it will show result justified wrt right side of the terminal
        else if(i==3 && numOFrecords>=i){
            printf("3rd. - %s, - %s, - %.2f\n\n",rec[2].name,rec[2].id,rec[2].cgpa);
        }
            if(i<numOFrecords){
                printf("\n");
            }
            else{
                break;
            }
    }
    return 0;
}