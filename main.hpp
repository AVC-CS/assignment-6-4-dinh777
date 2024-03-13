#include <iostream>
using namespace std;

void swapValues(int &, int &);
void swapValues(int &, int &, int &);
void swapValues(int &, int &, int &, int &);

int main(){

int n1 = 1;
int n2 = 1;
int n3 = 1;
int n4 = 1;


cout << "Enter numbers: " << endl; 

swapValues(&n1, &n2);
swapValues(&n1, &n2, &n3);
swapValues(&n1, &n2, &n3, &n4);

}

void swapValues(int &n1, int &n2){

    int placeholder = n1;
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

    int placeholder = n1 ; 
    n1 = n4 ; 
    n2 = n3 ;
    n3 = n2 ; 
    n4 = placeholder ; 

}
