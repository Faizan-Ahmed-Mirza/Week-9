#include<iostream>
using namespace std;

main(){
    int integers , multiplynum , sum = 0 , multiply ;
    cout <<"Enter number of integers to be taken: " ;
    cin >> integers ;

    int num[integers] ;
    for(int i = 0 ; i < integers ; i++){
        cout << "Enter number: " ;
        cin >> num[i] ;
        sum = sum + num[i] ;
    }

    cout << "Enter multiplier: " ;
    cin >> multiplynum ;

    cout << "Numbers after being multiplied arae: " << endl ;

    for(int i = 0 ; i < integers ; i++){
        multiply = multiplynum * num[i] ;
        cout << multiply << "  " ;

    }

    cout << endl <<  "Sum of numbers is: " << sum ;
}