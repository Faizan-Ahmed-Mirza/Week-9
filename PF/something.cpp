#include<iostream>
using namespace std ;

main(){
    string name ;
    cout << "Enter string: " ; getline(cin , name) ;
    
    cout << endl << "Somthing " ; 
    for(int i = 0 ; name[i] != '\0' ; i++){
        cout << name[i] ;
    }
}