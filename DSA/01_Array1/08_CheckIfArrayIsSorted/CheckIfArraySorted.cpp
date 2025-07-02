#include <iostream>
using namespace std;

//Efficient method
int isSorted(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i-1])
            return false;
    }
    return true;
}