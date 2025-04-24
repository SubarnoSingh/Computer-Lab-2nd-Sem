#include<stdio.h>
int factorial(int n){
    int fact=1;
    for (int i = 1; i <=n; i++)
    {
        fact*=i;
    }
    return fact;
}
int main(){
    int n,sum=0;
    
    printf("Enter value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <=n; i++)
    {
        sum+=factorial(i);        
    }
    printf("The sum of factorial from 1! to %d! is %d",n,sum);
    return 0;
}