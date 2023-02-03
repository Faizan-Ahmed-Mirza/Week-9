#include<iostream> 
using namespace std ;

main(){
    int array1[2] ;
    cout << "Enter 1st array(2 integers): " ;
    cin >> array1[0] ; cin >> array1[1] ;

    int ln2 ;
    cout << "Enter lenghth of 2nd array: " ;
    cin >> ln2 ;
    int array2[ln2] ;
    cout << "Enter 2nd array: " ;

    for(int i = 0 ; i < ln2 ; i++){
        cin >> array2[i] ;    
    }

    cout << " " << array1[0] ;

    for(int i = 0 ; i < ln2 ; i++){
        cout << " " << array2[i] ;
    }

    cout << " " << array1[1] ;

}