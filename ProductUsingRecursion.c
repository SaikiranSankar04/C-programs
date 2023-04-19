#include <stdio.h>
float product(float x,float y)
{
    if (x < y)
    {
        return product(y,x);
    }
    else if (y!=0)
    {
        return (x+product(x,y-1));
    }
    else
    {
        return 0;
    }
}
 
int main()
{
    float x, y, pr;
    printf("Enter 1st number: ");
    scanf("%f",&x);
    printf("Enter 2nd number: ");
    scanf("%f",&y);
    pr=product(x, y);
    printf("Product Of The Given Numbers is %f\n",  pr);
    return 0;
}
 

