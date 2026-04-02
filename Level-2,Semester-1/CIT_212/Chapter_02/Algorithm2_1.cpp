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
    int MAX=data[0];

    while(true){
        K=K+1;
        if(K>n){   
            cout<<"Largest value: "<< MAX <<endl;
            cout<<"Location: "<<LOC<<endl;
            break;
        }
        if(MAX< data[K - 1]) {
            MAX = data[K - 1];
            LOC = K;
        }
    }
    return 0;
}
