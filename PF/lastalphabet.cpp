#include<iostream>
using namespace std ;

main(){
    string name ;
    cout << "Enter string: " ;
    getline(cin , name) ;
    cout << "Enter last letter: " ;
    char find ; cin >> find ; int index = 0 ;

    while(name[index] != '\0'){
        index = index + 1 ;
    }

    if(name[index-1] == find){
        cout << "True" ;
    }
    else {
        cout << "False" ;
    }
}