//  max element an an array
//  i/p= 2,3,7,6,4,8
//  o/p= 8



#include<iostream>
#include<limits.h>
using namespace std;

// First Approach

int getMax(int arr[],int n){
    
    int ans = INT_MIN;
    for(int i=0; i<n; i++){
        ans=max(ans,arr[i]);
    }
    return ans;
   
}

int main(){
    int arr[]={3,5,4,8,7,6,9};
    //getMax(arr,7);
    cout<<"Maximum value is:"<<getMax(arr,7)<<endl;
    
   
    
    
    return 0;
}

// 2nd Approach

int getMax(int arr[],int n){
    
    int ans = arr[0];
    for(int i=1; i<n; i++){
        ans=max(ans,arr[i]);
    }
    return ans;
   
}

int main(){
    int arr[]={3,5,4,8,7,6,9};
    //getMax(arr,7);
    cout<<"Maximum value is:"<<getMax(arr,7)<<endl;
    
   
    
    
    return 0;
}
