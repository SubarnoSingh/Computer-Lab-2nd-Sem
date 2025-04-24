#include<stdio.h>

int main(){
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    while (num>=10) 
    {
        int sum =0;
        while (num>0)
        {
            sum+=num%10;
            num/=10;
        }
        num=sum;
    }
    
    printf("Digital root is : %d",num);
    return 0;
}