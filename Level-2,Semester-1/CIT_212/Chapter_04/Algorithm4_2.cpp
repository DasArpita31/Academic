#include<iostream>
using namespace std;

int main(){
    int LA[] = {10,20,30,40};
    int N=4;
    int k=2;
    int ITEM=99;

    for(int j=N;j>=k;j--){
        LA[j+1]=LA[j];
    }
    LA[k]=ITEM;

    N=N+1;

    for(int i=0;i<N;i++){
        cout<<LA[i]<<" ";
    }
    return 0;

}
