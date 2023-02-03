#include<iostream>
using namespace std ;

main(){
    string name ;
    cout << "Enter name: " ;
    cin >> name ; 
    int index = 0 ; 

    while(name[index] != '\0'){
        index = index + 1 ;
    }

    if(index%2 == 0){
        cout << "The no of letters is even." ;
    }

    else{
        cout << "The no of letters is odd." ;
    }
}