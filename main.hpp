#include <iostream>
using namespace std;

// void swapValues(int &, int &);
// void swapValues(int &, int &, int &);
// void swapValues(int &, int &, int &, int &);

void swapValues(int &n1, int &n2){

    int placeholder = n2;
    n2 = n1;
    n1 = placeholder;

}

void swapValues(int &n1, int &n2, int &n3){

    int placeholder = n1 ; 
    n1 = n2 ; 
    n2 = n3 ;
    n3 = placeholder ; 
}

void swapValues(int &n1, int &n2, int &n3, int &n4){

    int placeholder1 = n1 ; 
    int placeholder2 = n2 ; 
    n1 = n4 ; 
    n2 = n3 ;
    n3 = placeholder2 ; 
    n4 = placeholder1 ;

}
