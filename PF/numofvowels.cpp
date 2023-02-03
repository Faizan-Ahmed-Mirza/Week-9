#include<iostream>
using namespace std ;

main(){
    string name ;
    cout << "Enter name: " ;
    getline(cin , name) ;
    int index = 0 ; int count = 0 ;

    while(name[index] != '\0'){
        if(name[index] == 'a' || name[index] ==  'e' || name[index] ==  'i' || name[index] ==  'o' || name[index] ==  'u'){
            count = count + 1 ;
        }
        index = index + 1 ;
    }

    cout << "Total number of vowels: " << count ; 
}