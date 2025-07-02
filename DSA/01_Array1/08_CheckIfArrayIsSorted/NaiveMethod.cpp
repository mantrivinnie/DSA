#include <iostream>
using namespace std;

//using a boolean function 

//we are traversing from left to right and we check that their is no smaller element on the right side
bool isSorted(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i])
                return false;
        }
    }
    return true;
}

int main(){
    int arr[]={10,20,30,40,50};
    int n=5;

    cout<<isSorted(arr,n);

    return 0;
}


//Time Complexity: O(n^2)
//Space Complexity: O(1)
