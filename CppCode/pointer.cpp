#include<iostream>
using namespace std;

int main(){
    int a = 3;
    int* ptra;
    ptra = &a; // Pointer ptra now points to the address of a
    cout << "Value of a: " << a << endl; // Print the value of a
    cout << "Address of a: " << &a << endl; // Print the address
    cout << "Value pointed to by ptra: " << *ptra << endl; // Print the value pointed to by ptra
    cout << "Address stored in ptra: " << ptra << endl; // Print
    cout << "Address of ptra: " << &ptra << endl; // Print the address of pointer ptra
    *ptra = 5; // Change the value of a through pointer ptra
    cout << "New value of a: " << a << endl; // Print the new value of a
    return 0;

} 