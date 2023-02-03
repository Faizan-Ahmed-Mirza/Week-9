#include<iostream>
#include<cstring> 
using namespace std ;

main(){
    int pin[4] ; string move[10] = {"Shimmy" , "Shake" , "Pirouette" , "Slide" , "Box Step" , "Headspin" , "Dosado" , "Pop" , "Lock" , "Arabesque"} ;
    cout << "Enter PIN: " ;
    cin >> pin[0] >> pin[1] >> pin[2] >> pin[3] ;
    int location ;

    for(int i = 0 ; i < 10 ; i++){


        for(int k = 0 ; k < 4 ; k++){
            if(i == pin[k]){
                location = i + k ;
                if(location > 9){
                    location = location - 10 ;
                }
                cout << "  " << move[location] ;

            }
        }
    }
}