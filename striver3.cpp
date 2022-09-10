//VECTOR
#include<bits/stdc++.h>
using namespace std;
// we can define globally an array ,max size of 10^7 of datatypes -> int, double, char .
    int arr[10000000];
 // max size of 10^8 -> bool
    bool arr[10000000];

int main(){

// we can define array, max size of 10^6 of datatypes -> int, double, char inside int main()
    int arr[1000000];
    // max size of 10^7 -> bool
    bool arr[10000000];

    vector<int>arr;// -> {} ,an empty vector is created 
    cout<< arr.size() <<endl; // print 0
    arr.push_back(0); // {0}
    arr.push back(2); // {0,2} 
    cout<< arr.size()<<endl;// print 2

    arr.pop_back(); // pop back the last element -> {0}
    cout<< arr.size()<< endl; // print 1

 // Segmentation error - if we push_back 10^7 times 

     vec.clear(); // --> erase all the elements at once 

     vector<int> vec1(4,0); // {0,0,0,0}
     vector<int> vec2(4,10); //{ 10,10,10,10}

 // copy the entire vec2 into vec3
 vector<int> vec3(vec2.begin(),vec2.end());// -> [)
 vector<int> vec3(vec2);

 vector<int> raj;
 raj.push_back(1);
 raj.push_back(3);
 raj.push_back(2);
 raj.push_back(5); //-> {1,3,2,5}

 vector<int> raj1(raj.begin(), raj.begin()+2)//-> {1,3}

/*vec.push_back(1);
alter:
vec.emplace_back(1); ,emplace_back takes lesser time than push_back*/







}