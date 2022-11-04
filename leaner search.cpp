// Leaner search

#include <iostream>

using namespace std;

bool findtarget(int arr[],int size,int target){
    for(int i=0; i<=size;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[100];
    cout<<"Enter the number of element";
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(findtarget(arr,5,7)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found";
    }
    
    

    return 0;
}
