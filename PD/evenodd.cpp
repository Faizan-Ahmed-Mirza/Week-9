/*Write a C++ program that is given a string as input, it returns true if its length is even and
false if the length is odd*/

#include <iostream>
using namespace std ;

main(){
    string name ;
    cout << "Enter string: " ;
    getline(cin , name) ;
    int index = 1 ;

    while(name[index] != '\0'){
        index = index + 1 ;
    }

    if(index % 2 == 0){
        cout << "True!" ;
    }
    else{
        cout << "False!" ; 
    }
}