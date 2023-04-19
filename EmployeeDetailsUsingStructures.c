#include <stdio.h>
#include <stdlib.h>
struct date{
    int da;
    int m;
    int yr;
}*doj,d;
struct employee{
        int code;
        char name[20];
        struct date *doj,d;
    };
    struct employee *emp;
    
void createstruct(int n){
    emp=(struct employee*) malloc(n*sizeof(struct employee));
    doj=(struct date*) malloc(n*sizeof(struct date));
    for (int i=0;i<n;i++){
        printf("Person %d\n",(i+1));
        printf("Enter name: ");
        scanf("%s",&(emp+i)->name);
        printf("Enter employee code: ");
        scanf("%d",&(emp+i)->code);
        printf("Enter date of joining:\n ");
        printf("Enter date:");
        scanf("%d",&(emp+i)->d.da);
        printf("Enter month:");
        scanf("%d",&(emp+i)->d.m);
        printf("Enter year:");
        scanf("%d",&(emp+i)->d.yr);
    }
}
void tenurethree(int n){
    int cd,cm,cyr;
    printf("Enter current date:\n");
    scanf("%d",&cd);
    printf("Enter current month:\n");
    scanf("%d",&cm);
    printf("Enter current year:\n");
    scanf("%d",&cyr);
    for (int i=0;i<n;i++){
        if (cyr>((emp+i)->d.yr)+3){
            printf("%s",(emp+i)->name);
        }
        else if (cyr==((emp+i)->d.yr)+3){
            if (cm>((emp+i)->d.m)){
                printf("%s",(emp+i)->name);
            }
            else{
                if ((cm==((emp+i)->d.m))&&cd>((emp+i)->d.da)){
                    printf("%s",(emp+i)->name);
                }
            }
            
        }
    }
}

int main() {
    int n;
    printf("Enter number of employees:");
    scanf("%d",&n);
    createstruct(n);
    tenurethree(n);
    return 0;
}
