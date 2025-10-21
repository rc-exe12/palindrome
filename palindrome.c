#include<stdio.h>
int main(){
int rev=0,n;
printf("Enter a number to reverse:\n");
scanf("%d",&n);
while(n>0){ 
    rev=rev*10+n%10;
    n=n/10;
}
printf("The reversed number is: %ch\n",rev);
if(rev=n)
printf("The given number/word is palindrome");
else 
printf("The given number/word is palindrome");
return 0;

}