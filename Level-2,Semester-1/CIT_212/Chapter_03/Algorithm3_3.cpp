#include<iostream>
using namespace std;

int index(char P[],char T[]){
    int R=0,S=0;
    while(T[S]!='\0')
        S++;
    while(P[R]!='\0')
        R++;
    int K=0;
    int MAX=S-R;

    while(K<=MAX){
        int L;
        for(L=0;L<R;L++){
            if(P[L]!=T[K+L])
            break;
        }
        if(L==R)
        return K;
        K=K+1;
    }
    return -1;
}

int main(){
    char T[100],P[50];
    cout<<"Enter Text T: ";
    cin>>T;
    cout<<"Enter Pattern P: ";
    cin>>P;
    int pos = index(P,T);

    if(pos!=-1)
    cout<<"Pattern found at index = "<<pos<<endl;
    else
    cout<<"Pattern not found "<<endl;
    return 0;
}
