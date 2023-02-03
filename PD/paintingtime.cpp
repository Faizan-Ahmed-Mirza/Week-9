#include<iostream>
using namespace std ;

main(){
    int index ; int totaltime = 2 ;
    cout << "Enter no of colors he used: " ;
    cin >> index ;
    string name[index] ;

    cout << "Enter colors: " ;
    for(int i = 0 ; i < index ; i++){
        cin >> name[i] ;

    }

    for(int i = 0 ; i < index-1 ; i++){
        if(name[i] == name[i+1]){
            totaltime = totaltime + 2 ;
        }
        else{
            totaltime = totaltime + 3 ;
        }
        

    }
    
    cout << "Total time for paining(sec): " << totaltime ;

}