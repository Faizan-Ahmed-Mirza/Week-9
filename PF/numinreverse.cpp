#include<iostream>
using namespace std ;

main(){
    int integers ;
    cout << "Enter number of integers to be taken: " ;
    cin >> integers ;

    int num[integers] ;
    for(int i = 0 ; i < integers ; i++){
        cout << "Enter " << i+1 << " number: " ;
        cin >> num[i] ;
    }

    for(int i = integers-1 ; i >= 0 ; i--){
        cout << num[i] << "  " ; 
    }
}