// sort an array of 0's,1's and 2's
//input=>{1,0,2,2,2,0,1,1}
//outpot=>0,0,1,1,1,2,2,2

// This code is not optimized it is only for understanding.
#include<iostream>
using namespace std;


void sort(int arr[],int n){
    int one=0, two=0, zero=0;
    
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            zero++;
        }
        else if(arr[i]==1){
            one++;
        }
        else{
            two++;
        }
    }
    
    int i=0;
    
    while(zero--){
        arr[i]=0;
        i++;
    }
    
    while(one--){
        arr[i]=1;
        i++;
    }
    
    while(two--){
        arr[i]=2;
        i++;
    }
}

int main(){
    
    int arr[]={0,1,2,2,2,1,1,0};
    int size=8;
    sort(arr,8);
    
    for(int i=0; i<8; i++){
      cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    return 0;
}


// Predefined sort function    
    /*sort(arr,arr+4);
    for (int i = 0; i < 4; ++i){
        cout << arr[i] << " "; 
    */
   // print(arr,size);
   // cout<<endl;
    
    
