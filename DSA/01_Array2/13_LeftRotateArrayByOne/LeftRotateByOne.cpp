#include <iostream>
using namespace std;

int leftRotateOne(int arr[],int n){
    int temp = arr[0];

    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

int main(){
    int arr1[6] = {10,20,30,40,50,60};
    int n = 6;
    
    cout<<"Result after left rotate by one : ";
    leftRotateOne(arr1,n);
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }

    return 0;
}