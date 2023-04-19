#include <stdlib.h>
#include <stdio.h>
struct student{
    char name;
    int regno;
    float s1;
    float s2;
    float s3;
    float s4;
    float s5;
    float gpa;
    int rank;
}st,*stptr;
void create(int n,float *arr){
    stptr=(struct student*)malloc(n*sizeof(struct student));
    
    for (int i=0;i<n;i++){
        int sum=0;
        printf("Student %d: \n",(i+1));
        printf("Enter name: ");
        scanf("%s",&(stptr+i)->name);
        printf("Enter reg no: ");
        scanf("%d",&(stptr+i)->regno);
        printf("Subject 1: ");
        scanf("%f",&(stptr+i)->s1);
        sum+=(stptr+i)->s1;
        printf("Subject 2: ");
        scanf("%f",&(stptr+i)->s2);
        sum+=(stptr+i)->s2;
        printf("Subject 3: ");
        scanf("%f",&(stptr+i)->s3);
        sum+=(stptr+i)->s3;
        printf("Subject 4: ");
        scanf("%f",&(stptr+i)->s4);
        sum+=(stptr+i)->s4;
        printf("Subject 5: ");
        scanf("%f",&(stptr+i)->s5);
        sum+=(stptr+i)->s5;
        float g=sum/50;
        g=(stptr+i)->gpa;
        arr[i]=g;
        printf("Successfully entered records of student-%d\n",(i+1));
    }

    
}

void gparr(float *arr,int n){
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (int i=0;i<n;i++){
        float m=(stptr+i)->gpa;
        for (int j=0;j<n;j++){
            if (m==(stptr+j)->gpa){
                (stptr+j)->rank=i+1;
            }
        }}

}
int main() {
    int n;
    float arr[n];
    printf("Enter number of students: ");
    scanf("%d",&n);
    create(n,arr);
    gparr(arr,n);
    printf("Student GPA and Rank is as follows\n");
    for (int i=0;i<n;i++){
    printf("Student name %s\n",(stptr+i)->name);
    printf("Student gpa %f\n",(stptr+i)->gpa);
    printf("Student rank %d\n",(stptr+i)->rank);
}
    return 0;
}
