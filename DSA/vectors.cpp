#include<iostream>
#include<vector>
using namespace std;
int main(){

// Vector creation
// vector <int> arr;
// vector <int> miles(10);
// vector <int> distance(10, 5);

vector <int> marks;

// Push_back or Pop_back or Size
marks.push_back(10);
marks.push_back(20);
marks.push_back(30);
marks.push_back(40);

cout<<"Size of Makrs Vector : "<<marks.size()<<endl; // Size : 4

// marks.pop_back();
// cout<<"Size of Makrs Vector after Pop: "<<marks.size()<<endl; // Size : 3

// Front or Back
cout<<"First Elemnt of Makrs Vector : "<<marks.front()<<endl; // Frist Elemnet : 10
cout<<"Last Elemnt of Makrs Vector : "<<marks.back()<<endl; // Frist Elemnet : 40


// Empty
if(marks.empty()==true){
    cout<<" Vector of Marks is Empty"<<endl;
}else{
    cout<<"Vector of Marks is not Empty"<<endl;
}



// Operator[]
cout<<" Vector of Marks [0] : "<<marks[0]<<endl;
cout<<" Vector of Marks [1] : "<<marks[1]<<endl;
cout<<" Vector of Marks [2] : "<<marks[2]<<endl;
cout<<" Vector of Marks [3] : "<<marks[3]<<endl;
cout<<endl;
// at()
cout<<" Vector of Marks [0] : "<<marks.at(0)<<endl;
cout<<" Vector of Marks [1] : "<<marks.at(1)<<endl;
cout<<" Vector of Marks [2] : "<<marks.at(2)<<endl;
cout<<" Vector of Marks [3] : "<<marks.at(3)<<endl;


// Capacity

cout<<"Capacity of Vector of Marks : "<<marks.capacity()<<endl;
marks.push_back(50);
cout<<"Capacity of Vector of Marks : "<<marks.capacity()<<endl;
cout<<endl;

// Reserve
marks.reserve(10);
cout<<"Capacity of Vector of Marks : "<<marks.capacity()<<endl;

// Clear
// marks.clear();
// cout<<"Size of Makrs Vector : "<<marks.size()<<endl; // Size : 4


// Insert

//Swap

// Erase

// For each

// iterator

// 2D Vector Creation

// 2D Vector couunt rows and column

// 2D Vector with differnt column

    return 0;
}

