#include <math.h>
#include "NumClass.h"



int fact(int);


int isStrong(int n){
    int sum=0;  
    int k=n;  
    int r=0;  
    while(k!=0)  
    {  
        r=k%10;  
        int f=fact(r);  
        k=k/10;  
        sum=sum+f;  
    }  
    if(sum==n)  
    {  
        return 1;
    }  
    else  {
return 0;

    }  
    
}  
int fact(int r)  
{  
    int m=1;  
    for(int i=1;i<=r;i++)  
    {  
        m=m*i;  
    }  
    return m;  

}

int isPrime(int n){
 int i, flag = 1;
  
  if (n == 0)
    flag = 0;

 if (n == 1)
    flag = 1;


  for (i = 2; i <= n / 2; ++i) {

   
    if (n % i == 0) {
      flag = 0;
      break;
    }
  }
return flag;
}

