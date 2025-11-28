#include<stdio.h>
int pali_n(int);
int main(){
int n;
printf("Enter a number to reverse:\n");
scanf("%d",&n);
int r=pali_n(n);
if(r == n){
printf("The given number/word is palindrome");
}
else{ 
printf("The given number/word is not palindrome");
}
return 0;
}
int pali_n(int n){
    int rev=0;
    while(n>0){ 
    rev=rev*10+n%10;
    n=n/10;
    }
    return rev;
    
}
