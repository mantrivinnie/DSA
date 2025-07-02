#include <iostream>
using namespace std;

int reverseArray(int arr[],int n){
    int low = 0;
    int high = n-1;
    
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

int main(){
    int arr[]={10,20,30,40,50};
    int n=5;

    cout<<"reversed array 1:\n";
    reverseArray(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}