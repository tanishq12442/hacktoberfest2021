#include<iostream>

using namespace std;

int main(){
    
    int n,d;

    cin>>n>>d;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
        }
        
    for(int x=0;x<d;x++){
        int temp=a[0];
        for(int i=0;i<n;i++){
            int temp=a[0];
            a[i]=a[i+1];
        }  
           a[n-1]= temp;
    }
   
        for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        }  
    
        
    
    
}
