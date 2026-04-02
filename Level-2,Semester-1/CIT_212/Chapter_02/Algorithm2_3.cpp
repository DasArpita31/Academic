#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of element:";
    cin>>n;
    int data[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>data[i];
    }
    int K=1;
    int LOC=1;
    int MAX=data[1];

    while(K<n){
        if(MAX<data[K]){
            MAX = data[K];
            LOC = K+1;
        }
        K=K+1;
    }
            cout<<"Largest value: "<< MAX <<endl;
            cout<<"Location: "<<LOC<<endl;  
    return 0;
}
