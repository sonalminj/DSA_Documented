#include<bits/stdc++.h>
using namespace std;

array<int,3>arr;// -> if we declare anything globally then automatically  all index's values become zero.


int main(){
    // Arrays -> int arr[100]

    // array<int,100>arr; //another way of defining the array 
    // array<int,3>arr; // ->{ ?,?,?} if we will declare inside int main and do not initialize them then it will give garbage values.
    array<int,5>arr; // -> { }
    array<int,5>arr ={ 1,5,6}; //-> {1,5,6,0,0}
    array<int,5>arr={1}; //-> { 1,0,0,0,0}

    int arr[10000] ={0}//It doesn't mean that all index's values are 0 ,it means we are intializing 0th index with 0 ,remaining since we are not intializing it become zero.

    //*******************.fill() function **********************

    array<int,5>arr;
    arr.fill(1) //->{ 1,1,1,1,1} it will fill all the indexes with 1
    arr.fill(5) // Entire array will be filled up with 5
     
    // *********************.at(index no.)********************
    //The function returns an element present at index i in given array if i is valid index.
    array<int,5>arr;
    arr.at(index)
    for (i=0,i<5,i++){
        cout<< arr.at(i)<< "";
    
    }

    // iterators 
    // begin() , end(), rbegin(), rend()
    /* suppose there is an array with addresses [x , x+1 , x+2 ,x+3 , x+4 ]
    begin() - points to starting point that is x,
    rbegin() - points to reverse begin that means end point that is x+4,
    end()- points to an empty address right after the last element i.e,x+5,
    rend - pointa to an empty address right before the starting element  i.e,x-1 */

    array<int,5>arr = {1,5,7,3,4};
    for( auto it: arr.begin(); it! = arr.end(),it++){
        cout<< *it<< " ";

    }
    /* auto - automatically takes it's datatype ,"it"is a pointer which initialiy points begin() element of the array 
    /--> {1,5,7,3,4}*/

    for( auto it: arr.rbegin(); it>= arr.rend(),it++){
        cout<< *it<< " ";

    } //--> it will print the reverse order 


    for( auto it: arr.end()-1; it>= arr.begin(),it--){
        cout<< *it<< " ";

    } //--> it will print the reverse order 


    // for each loop 

    for (auto it: arr)/*auto:it -it  iterates on the element itself,it is the element itself  and is always a forwrd iterator so we don't need to write *it  */{
        cout<< it<<" ";
    }

    string s = "xhegcwe";
    // x h e g c w e
    for( auto c:s){
        cout<< c <<" ";
    }

    // To print the size of the array 
     
    cout << arr.size();

    // To print the first element , front()

    cout<< arr.front();// arr.at(0)

    // To print the last element ,back()

    cout<< arr.back();// arr.at(arr.size() -1);

    

    








    
    
}