#include<iostream>
using namespace std ;

main(){
    string name1 , name2 ; int count = 0 ;
    cout << "Enter string 1: " ;
    cin >> name1 ;
    cout << "Enter string 2: " ;
    cin >> name2 ;

    for(int i = 0 ; name1[i] != '\0' ; i++){
        for(int k = 0 ; name2[k] != '\0' ; k++){
            if(name1[i] == name2[k]){
                count = count + 1 ;
                name2[k] = '^' ;
                break ;
            }
            
        }

    }

    cout << "Common characters in strings are: " << count ; 
}