#include<iostream>
using namespace std ;

main(){
    string fruits[4] = {"peach" , "apple" , "guava" , "watermelon"} ;
    int price[4] = {60 , 70 , 40 ,30} ; 
    string f ; int q ;
    cout << "Enter fruit name: " ;
    cin >> f ; cout << "Enter quantity: " ;
    cin >> q ; int index = 0 ;

    for(int i = 0 ; f != fruits[i] ; i++){
        index = index + 1 ;
    }

    if(f != fruits[index]){
        cout << "Enter valid fruit name!" ;
        return 0 ;
    }

    cout << "Total price: " << price[index]*q << "Rs." ;
}