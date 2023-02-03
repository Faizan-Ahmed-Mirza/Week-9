#include<iostream>
using namespace std;

main(){
    int integers , min = 999999999 ;
    cout <<"Enter number of integers to be taken: " ;
    cin >> integers ;

    int num[integers];
    for(int i = 0 ; i < integers ; i++){
        cout << "Enter number: " ;
        cin >> num[i] ;
        if(num[i] < min){
            min = num[i] ;
        }
    }

    cout << "Minimum number is: " << min ;
}