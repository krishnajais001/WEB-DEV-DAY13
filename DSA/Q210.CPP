#include<iostream>
using namespace std;

int sumOfDigits(int num){

int sum=0;
while(num!=0){
    int lastDigit = num % 10;
    sum = sum+lastDigit;
    num=num/10;
}
return sum;
}
int main(){

// Sum of Digits
// I/P : num=456;
// O/P : 15

int num;
cout<<"Enter Your Number : ";
cin>>num;
int finalOutput = sumOfDigits(num);
cout<<"Sum of "<<num<<" : "<< finalOutput;






    return 0;
}