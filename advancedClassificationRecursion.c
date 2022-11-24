#include <math.h>
#include "NumClass.h"

int reverse(int);
int CheckArmstrongNumber(int);


int isArmstrong(int n){
if(CheckArmstrongNumber(n)==n)
{
return 1;
}
else
return 0;
}


int CheckArmstrongNumber(int n)
{
     if(n>0)
    return (pow(n%10,3) +CheckArmstrongNumber(n/10));
}










int isPalindrome(int num)
{
    if(num == reverse(num))
    {
        return 1;
    }
    return 0;
}


int reverse(int num)
{
    int rem;
    static int sum=0;
    if(num!=0){
            rem=num%10;
            sum=sum*10+rem;
            reverse(num/10);
    }
        else
            return sum;
    return sum;
} 
