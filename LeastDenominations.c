/*Vikram’s mom gave him a certain amount of money and asked him to get change for the money in coins. 

She also told the denominations of coin she wanted and also told the total number of coins must be minimum.  

If that amount of money cannot be made up by any combination of the coins, print -1*/
#include <stdio.h>
int main(){
    int total,nd;
    scanf("%d",&total);
    scanf("%d",&nd);
    int array[nd];
    for (int i=0;i<nd;i++){
        scanf("%d",&array[i]);
    }
    for (int i=0;i<nd;i++){
        for (int j=i+1;j<nd;j++){
            if (array[i]<array[j]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    int c=0,o=0;
    int output=0;
    while (c<nd){
        float val=(total/array[c]);
        val=(int)val;
        output+=val;
        int con=val*array[c];
        total=total-con;
        if (total==0){
            o=1;
            printf("%d",output);
            break;
        }
        else{
            c+=1;
        }
        
    }
    if (o==0){
        printf("%d",-1);
    }
    return 0;
    
}
