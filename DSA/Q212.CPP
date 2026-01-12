#include<iostream>
#include<limits.h>
using namespace std;

int evenOfDigits(int num){

    if((num&1)==0){
        cout<<"Even";
    }else{
        cout<<"Odd";
    }

}
int main(){

// Smallest Digits
// I/P : num=4;
// O/P : 4 even

int num;
cout<<"Enter Your Number : ";
cin>>num;

evenOfDigits(num);







    return 0;
}