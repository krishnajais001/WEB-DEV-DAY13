#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){

// Creation of Map
// Unordered List


// unordered_map<int , int> arr;
// unordered_map<string,int> distance;
// unordered_map<double ,string> milesl;
// unordered_map<string,int> abc;

//  unordered_map Creation
unordered_map <string,string> table;

// Insertion
table["in"] = "India";
table.insert(make_pair("en","England"));
pair<string, string> p;
p.first = "br";
p.second = "Brazil";
table.insert(p);

// Size
cout<<"Size of table Map : "<<table.size()<<endl;

if(table.empty()==true){
    cout<<"Map is empty"<<endl;
}else{
    cout<<"Map is not Empty"<<endl;
}


cout<<table.at("in")<<endl;

unordered_map<string,string>::iterator it=table.begin();

while (it!=table.end()){
    pair<string,string>p=*it;
    cout<<p.first<<" "<<p.second<<endl;
    it++;
}



    return 0;
}