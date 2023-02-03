#include<iostream>
using namespace std ;

main(){
    string movies[5] = {"gladiator" , "star wars" , "terminator" , "taking lives" , "tomb riders"} ;
    string name ;
    cout << "Enter movie name: " ;
    getline(cin , name) ;
    int index = 0 ;

    while(name != movies[index]){
        index = index + 1 ;
        if(index > 5 ){
            cout << "Invalid movie name!" ;
            return 0 ;
        }
    }

    if((index+1)%2 == 0){
        cout << "Ticket price: " << (500-(10*500/100)) << "Rs." ;
    }
    else{
        cout << "Ticket price: " << (500-(5*500/100)) << "Rs." ;
    }

}