#include<iostream>
using namespace std ;

main(){
    int trans ; 
    cout << "Enter number of times you want transformation: " ;
    cin >> trans ;
    int array[3] ;
    cout << "Enter array(3integers): " ;


    for(int i = 0 ; i < 3 ; i++){
        cin >> array[i] ;
        if(array[i] % 2 == 0){
            array[i] = array[i] - (2*trans) ;
        }
        else if(array[i] % 2 != 0){
            array[i] = array[i] + (2*trans) ;
        }
    }

    for(int i = 0 ; i < 3 ; i++){
        cout << "   " << array[i] ; 
    }

    
}