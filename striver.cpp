#include <bits/stdc++.h>// All libraries in c++ get imported.
using namespace std;


// what c++ has done is ,it has taken all its functions and put that into the std namespace . if we do not put the line "using namespace std;"
// then something like cout , cin will not work instead of that we will have to write std::cout ,std::cin.


// int main(){

// int val = 50;
// double val = 10.0;
// cout << val << endl;
// }
// It will throw an error , we can't declare same variable name of different data type .

// we can also declare our own namespace sonal


// namespace sonal {
//     int val = 50;
//     int getval(){
//         return val*10;
//     }
// Any function can also be declared inside namespace .

// }
// int main(){
//     double val =10.0;
//     cout << val<< endl;//prints 10
//     // cout<<sonal::val<< endl; // prints 50
//     cout<< sonal::getval()<< endl;
// }

// namespace is a kind of scope inside which we can declare something and that can be accessed by sonal::.


//**************************Structure***********************************//
//Structures in C++ are user defined data types which are used to store group of items of non-similar data types. 
// How to create a structure 

// struct structurename{
//     datamember;
//     member functions;
// }

/*class
struct node {

    string str;
    int num;
    double doub;  
    char x;
};
int main(){

//object

// It will work but it is wrong way of defining 

node sonal;
sonal.str = "string";
sonal.num = 79;
sonal.doub = 91.0;


}

*/

// Correct way of defining 

/*struct node{
    string str;
    int num;
    double doub;
    char x;

    // create a constructor
    node( str_,num_,doub_,x_){
        str = str_;
        num = num_;
        doub = doub_;
        x = x_;

    }



};

int main(){
    node sonal = new node("string",56,88.7,"");// x is empty ,it may take any dummy value.

}
*/









