#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    string b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int c[m]={0};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(b[i]==a[j]){
                c[i]++;
            }
        }
    }
    for(int i=0;i<m;i++){
        cout<<c[i]<<endl;
    }
    
}
