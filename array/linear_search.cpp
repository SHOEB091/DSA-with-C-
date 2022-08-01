#include<iostream>
using namespace std;

bool search(int arr[], int size, int key) {

    for( int i = 0; i<size; i++ ) {

        if( arr[i] == key) {
            return 1;
        }

    }
    return 0;
}


int main() {

    int arr[10],size;
    cout<<"Enter the size of an array\n";
    cin>>size;

    cout<<"Enter the elements in an array\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout <<" Enter the element to search for " << endl; 
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if( found ) {
        cout <<" Key is present "<< endl;
    }
    else{
        cout <<" Key is absent " << endl;
    }


    return 0;
}