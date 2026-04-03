#include<iostream>
using namespace std;

int main(){
    int DATA[]={5,3,8,4};
    int N=4;

    for(int k=1;k<=N-1;k++){
        int PTR=0;
        while(PTR<N-k){
            if(DATA[PTR]>DATA[PTR+1]){
                int temp = DATA[PTR];
                DATA[PTR]=DATA[PTR+1];
                DATA[PTR+1]=temp;    
              }
              PTR++;
        }
    }

    for(int i=0;i<N;i++){
        cout<<DATA[i]<<" ";
    }
    return 0;
}
