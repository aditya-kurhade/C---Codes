#include<iostream>
using namespace std;

int main(){
    int arr[6] = {3,4,3,5,4,3};

    arr[0] = 5; // Change the first element to 5
    cout<< sizeof(arr)/sizeof(arr[0]) << endl; // Print the size of the array
    return 0;
}