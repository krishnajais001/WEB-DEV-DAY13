#include<iostream>
#include<limits.h>
using namespace std;

int minOfDigits(int num){
int min_digit =INT_MAX;

while(num!=0){
    int lastDigit = num % 10;
  min_digit =  min(min_digit,lastDigit);
    num=num/10;
}
return min_digit;
}
int main(){

// Smallest Digits
// I/P : num=456;
// O/P : 4

int num;
cout<<"Enter Your Number : ";
cin>>num;
int finalOutput = minOfDigits(num);
cout<<"Smallest Digit "<<num<<" : "<< finalOutput;






    return 0;
}