//  Reverse an array
//  i/p= 2,3,7,6,4,8
//  o/p= 8,4,6,7,3,2,

#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    //starting index
    int i=0;
    
    //Ending index
    int j=size-1;
    
    while(i>=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main(){
    int arr[]={3,5,4,8,7,6,9};
    reverseArray(arr,7);
    
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    
    return 0;
}
