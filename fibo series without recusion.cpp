//  print fibo series without recursion
//  0,1,1,2,3,5,8,13,.......n


#include<iostream>
using namespace std;

// void aur int apne according lga lenge
void printfibo(int n){
    
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
// agar hum a=-1 and b=1 aur n tk loop chlate hai tab hame starting me a and b ka value print nahi krana pdega
    for(int i=0; i<n-2; i++){
        int sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
        
    
    
}

int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    printfibo(n);
    
    return 0;
}
