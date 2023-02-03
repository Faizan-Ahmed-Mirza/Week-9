/*

Create a program that checks in an array (slot machine outcome) and prints true if all
elements in the array are identical, and false otherwise. The array will contain 4 elements.

*/
#include<iostream>
#include<string>
using namespace std ;

main(){
    int index ; bool flag = true ;
    cout << "Enter no of integers in array: " ; 
    cin >> index ;
    cin.ignore() ;
    string name[index];

    for(int i = 0 ; i < index ; i++){
       getline(cin,name[i]) ;
    }

    for(int i = 0 ; i < index-1 ; i++){
       
        if(name[i] != name[i+1]) {
            flag = false ; break ;

        }
    }

    if(flag == true){
        cout << "True!" ;
    }
    else{
        cout << "False!" ;
    }


}