#include<iostream>
using namespace std ;

main(){
    int integers , numtobefound ;
    cout << "Enter number of integers to be taken: " ;
    cin >> integers ; bool flag = false ;

    int num[integers] ;
    for(int i = 0 ; i < integers ; i++){
        cout << "Enter " << i+1 << " number: " ;
        cin >> num[i] ;

    }

    cout << "Enter number to be found: " ;
    cin >> numtobefound ;

    for(int i = 0 ; i < integers ; i++){
        if(num[i] == numtobefound){
            flag = true ;
        }
    }

    if(flag == true){
        cout << "Number found!" ;
    }
    else{
        cout << "Number not found." ;
    }

}