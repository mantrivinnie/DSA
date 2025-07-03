#include <iostream>
using namespace std;

void MovingZeroes(int arr[],int n){
    int x=0; // x is used to keep track of non-zero elements

    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[x]=arr[i];
            x++; 
        }
    }

    for(int i=x;i<n;i++){
        arr[i]=0;
    }
}

int main(){
    int arr[8]={0,0,2,0,3,0,0,7};
    int arr2[5]={1,0,2,5,0};

    MovingZeroes(arr,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n";
    MovingZeroes(arr2,5);
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }


    return 0;
}


