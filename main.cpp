#include <iostream>

using std::cout;//program uses cout
using std::cin;//program uses cin
using std::endl;//program uses endl
int main() {
    int i{0};// instantiate int i
    int j{0};//instantiate in j

    cout << "Enter an integers to compare " ;// take in a 2 integers
    cin >> i;
    cout << " Enter the second integer to compare to";
    cin >> j;

    if( i == j){
        cout << i << " == " << j << endl;
    }
    if ( i >= j){
        cout << i << " >= " << j << endl;
    }
    if ( i <= j ){
        cout << i << " <= " << j << endl;
    }
    if ( i != j){
        cout << i <<  " != " << j << endl;
    }
}//end function