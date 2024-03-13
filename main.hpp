#include <iostream>
using namespace std;

// void swapValues(int &, int &);
// void swapValues(int &, int &, int &);
// void swapValues(int &, int &, int &, int &);

void swapValues(int &n1, int &n2){

    int placeholder = n1;
    n2 = n1;
    n1 = placeholder;
    cout << n1 << n2 << endl ; 

}

void swapValues(int &n1, int &n2, int &n3){

    int placeholder = n1 ; 
    n1 = n2 ; 
    n2 = n3 ;
    n3 = placeholder ; 
    cout << n1 << n2 << n3 << endl ; 

}

void swapValues(int &n1, int &n2, int &n3, int &n4){

    int placeholder = n1 ; 
    n1 = n4 ; 
    n2 = n3 ;
    n3 = n2 ; 
    n4 = placeholder ; 
    cout << n1 << n2 << n3 << n4 << endl ; 
}
