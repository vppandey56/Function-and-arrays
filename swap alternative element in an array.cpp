//swap Alternate element in an array

//even
// i/p= {2,3,4,5,6,7}
// o/p={3,2,5,4,7,6}

//odd
// i/p={2,3,4,5,6,7,8}
// o/p={3,2,5,4,7,6,8}

#include<iostream>
using namespace std;


void SwapAlterValue(int arr[],int n){
    
    int i=0;
    
    while(i<n){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
            
        }
        i=i+2;
        
    }
    
}

int main(){
    int arr[]={3,5,7,6,9,2,5,2,1};
    SwapAlterValue(arr,9);
    for(int i=0; i<9; i++){
      cout<<arr[i]<<" ";
    }
    
    cout<<endl;

    return 0;
}
