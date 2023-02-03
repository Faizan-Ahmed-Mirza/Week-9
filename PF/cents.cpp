#include<iostream>
using namespace std ;

main(){
    cout << "Enter budget(quarters , dimes , nickels , pennies): " ; 
    float money[4] ;

    for(int i = 0 ; i < 4 ; i++){
        cin >> money[i] ;
    }

    int quarters = money[0]  ; 
    int dimes = money[1] ;
    int nickels = money[2] ;
    int pennies = money[3] ;

    float netcents = (0.25*quarters) + (0.1*dimes) + (0.05*nickels) + (0.01*pennies) ;

    float price ;
    cout << "Enter price of product: " ;
    cin >> price ;

    if(netcents >= price){
        cout << "True" ;
    }

    else if(netcents < price){
        cout << "False" ;
    }

}