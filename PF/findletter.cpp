#include<iostream>
using namespace std ;

main(){
    string name ;
    cout << "Enter name: " ;
    getline(cin , name) ;
    char find ;
    cout << "Enter character to be found: " ;
    cin >> find ;
    int index = 0 ;

    while(name[index] != '\0'){
        if(name[index] == find){
            cout << "Character found!" ;
            break ;
        }
        index = index + 1 ;
    }

    if(name[index] != find){
        cout << "Character not found!" ;
    }

}