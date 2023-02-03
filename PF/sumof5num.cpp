#include<iostream>
using namespace std ;

main(){
    int sum = 0 ;
    int num[5] ;

    for(int i = 0 ; i < 5 ; i++){
        cout << "Enter number: " ;
        cin >> num[i] ;
        sum = sum + num[i] ;
    }

    cout << "Sum of number is: " << sum ; 
}