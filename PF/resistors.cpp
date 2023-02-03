#include<iostream>
using namespace std ;

main(){
    int numofresis ; 
    cout << "Enter num of resistors: " ;
    cin >> numofresis ;
    float resis[numofresis] ; float sum = 0 ;

    for(int i = 0 ; i < numofresis ; i++){
        cout << "Enter resistance: " ;
        cin >> resis[i] ;
        sum = sum + resis[i] ;
    }
    cout << "Total resistance: " << sum ;
}