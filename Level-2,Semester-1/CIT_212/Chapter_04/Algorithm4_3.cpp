#include<iostream>
using namespace std;

int main(){
    int LA[]={10,20,30,40,50};
    int N=5;int k=2;
    int ITEM;

    ITEM=LA[k];
    for(int j=k;j<N-1;j++){
        LA[j]=LA[j+1];
    }
    N=N-1;
    cout<<"Delted item: "<<ITEM<<endl;
    cout<<"Array after deletion: ";
    for(int i=0;i<N;i++){
        cout<<LA[i]<<" ";
    }
}
