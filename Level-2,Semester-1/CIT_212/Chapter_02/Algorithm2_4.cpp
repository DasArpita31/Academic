#include<iostream>
using namespace std;

int main(){
    int n,item;
    cout<<"Enter number of elements: ";
    cin>>n;
    int data[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>data[i];
    }
    cout<<"Enter item to search: ";
    cin>>item;
    int K=1;
    int LOC=0;
    while(LOC==0 && K<=n){
        if(item==data[K-1]){
            LOC=K;
        }
        K=K+1;
    }
    if(LOC==0){
        cout<<"item is not int the array DATA "<<endl;
    }
    else{
        cout<<" LOC is the location of item: "<<LOC<<endl;
    }
    return 0;
}
