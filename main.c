#include<stdio.h>
#include <math.h>
#include"NumClass.h"


int isStrong(int );
int isPrime(int );
int isArmstrong(int);
int isPalindrome(int);


int main(){
int n=0, d=0;
printf("Inter Two Numbers");
scanf("%d", &n);
scanf("%d", &d);

printf("Armstrong numbers:");
for(int i=n;i<=d;i++){
if(isArmstrong(i)==1){
printf("%d", i);
}
}
printf("/n");


printf("Palindrome Numbers:");
for(int i=n;i<=d;i++){
if(isPalindrome(i)==1){
printf("%d",i);
}
}
printf("/n");

printf("Palindrome Numbers:");
for(int i=n;i<=d;i++){
if(isPalindrome(i)==1){
printf( "%d",i);
}
}
printf("/n");

printf("Strong Numbers: ");
for(int i=n;i<=d;i++){
if(isStrong(i)==1){
printf("%d",i);
}
}
printf("/n");


printf("Prime Numbers:");
for(int i=n;i<=d;i++){
if(isPrime(i)==1){
printf("%d", i);
}
}

printf("/n");
return 0;


}