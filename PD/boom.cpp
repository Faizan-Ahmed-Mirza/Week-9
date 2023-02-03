/*Write a program that takes an array of numbers as input from the user and then prints
"Boom!" if the digit 7 appears in the array. Otherwise, print "there is no 7 in the array".*/

#include<iostream>
using namespace std ;

main(){
    int index ;
    cout << "Enter no of integers in array: " ; cin >> index ;
    string name[index+1];
    

    for(int i = 0 ; i <= index ; i++){
        getline(cin , name[i]) ;
    }

    for(int i = 0 ; i <=  index ; i++){
        for(int k = 0 ; name[i][k] != '\0' ; k++){
            if(name[i][k] == '7'){
                cout << "Boom!" ; return 0 ;
            }
        }
    }

    cout << "There is no 7 in the array!" ;
}