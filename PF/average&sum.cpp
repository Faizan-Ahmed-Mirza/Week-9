#include<iostream>
using namespace std ;

main(){
    int integers ;
    cout << "Enter numeber of integers to be added and averaged: " ;
    cin >> integers ;

    int num[integers] , sum = 0 ;
    for(int i = 0 ; i < integers ; i++){
        cout << "Enter " << i+1 << " number: " ;
        cin >> num[i] ;
        sum = sum + num[i] ;

    }

    int average =  sum/integers ;

    cout << endl << "Sum of numbers: " << sum << endl << "Average: " << average ; 
}