#include<iostream>
using namespace std;

int main(){
    int LA[]={10,20,30,40,50};
    int LB = 0;
    int UB = 4;

    int k=LB;

    while(k<=UB){
        cout<<LA[k]<<" ";
        k++;
    }
    return 0;
}
