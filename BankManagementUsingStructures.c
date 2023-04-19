#include <stdio.h>
#include <stdlib.h>

struct bank{
        int accno;
        char name[20];
        float bal;
    };
    struct bank *bptr;
    
void createstruct(int n){
    bptr=(struct bank*) malloc(n*sizeof(struct bank));
    for (int i=0;i<n;i++){
        printf("Person %d\n",(i+1));
        printf("Enter name: ");
        scanf("%s",&(bptr+i)->name);
        printf("Enter account number: ");
        scanf("%d",&(bptr+i)->accno);
        printf("Enter balance: ");
        scanf("%f",&(bptr+i)->bal);
    }
}
void lowbal(int n){
    printf("Account number and name with balance less than Rs. 1000 are:\n ");
    for (int i=0;i<n;i++){
        if (((bptr+i)->bal)<1000){
            printf("Name: %s Account number: %d\n",(bptr+i)->name,(bptr+i)->accno);
        }
    }
    
}
void choice(int n){
    int an,amt,c,v;
    printf("Enter account number: ");
    scanf("%d",&an);
    printf("Enter amount: ");
    scanf("%d",&amt);
    printf("Enter 0 for deposit and 1 for withdrawal\n");
    printf("Enter code:");
    scanf("%d",&c);
    if (c==1){
        printf("...Withdrawal...\n");
        for (int i=0;i<n;i++){
        if (((bptr+i)->accno)==an){
            v=((bptr+i)->bal)-amt;
            if (v<1000){
                printf("Withdrawal not possible");
                
            }
            else{
                (bptr+i)->bal=v;
                printf("Successfully withdrew Rs. %d from %d...\n",amt,((bptr+i)->accno));
                printf("Amount remaining is Rs.%d\n",v);
            }
        }
    }
    }
    else{
        printf("...Deposit...\n");
        for (int i=0;i<n;i++){
        if (((bptr+i)->accno)==an){
            v=((bptr+i)->bal)+amt;
            (bptr+i)->bal=v;
            printf("Successfully deposited Rs. %d in %d...\n",amt,((bptr+i)->accno));
                printf("Amount remaining is Rs.%d\n",v);
        
    }}
}}   
int main() {
    int n;
    printf("Enter number of customers:");
    scanf("%d",&n);
    createstruct(n);
    lowbal(n);
    choice(n);
    return 0;
}
