#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int star=n/2;
    int space=1;
    for(int i=1;i<=star;i++){
        cout<<"*";
    }
    for(int j=1;j<=space;j++){
        cout<<" ";
    }
    for(int j=1;j<=star;j++){
        cout<<"*";
    }
    cout<<endl;
}