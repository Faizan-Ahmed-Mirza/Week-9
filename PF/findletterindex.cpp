#include<iostream>
using namespace std ;

main(){
    string name ;
    cout << "Enter name: " ;
    getline(cin , name) ;
    char find ;
    cout << "Enter letter whose index is to be found: " ;
    cin >> find ; int count = 0 ;

    for(int i = 0 ; name[i] != '\0' ; i++){
        if(name[i] == find){
            break ;
        }
        count = count + 1 ;
    }

    cout << "The letter is at index: " << count ; 
}