#include<iostream>
using namespace std;

main(){
    int integers , max = -999999999 ;
    cout <<"Enter number of integers to be taken: " ;
    cin >> integers ;

    int num[integers];
    for(int i = 0 ; i < integers ; i++){
        cout << "Enter number: " ;
        cin >> num[i] ;
        if(num[i] > max){
            max = num[i] ;
        }
    }

    cout << "Maximum number is: " << max ;
}