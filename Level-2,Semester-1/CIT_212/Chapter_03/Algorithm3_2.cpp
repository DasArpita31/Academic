#include<iostream>
using namespace std;

int length(char s[]){
    int len = 0;
    while(s[len]!='\0')
    len++;
    return len;
}

int index(char T[],char P[]){
    int i,j;
    int lenT=length(T);
    int lenP=length(P);

    for(i=0;i<=lenT-lenP;i++){
        for(j=0;j<lenP;j++){
            if(T[i+j]!=P[j])
            break;
        }
        if(j==lenP)
        return i;
    }
    return -1;
}

void REPLACE(char T[],int pos,char P[],char Q[]){
    int lenT=length(T);
    int lenP=length(P);
    int lenQ=length(Q);
    if(lenP==lenQ){
        for(int i=0;i<lenQ;i++)
        T[pos+i]=Q[i];   }
    else if(lenQ<lenP){
        for(int i=0;i<lenQ;i++)
        T[pos+i]=Q[i];
        for(int i=pos+lenP;i<=lenT;i++)
        T[pos+lenQ+i-(pos+lenP)]=T[i];
    }
    else{
        for(int i=lenT;i>=pos+lenP;i--)
        T[i+lenQ-lenP]=T[i];
        for(int i=0;i<lenQ;i++)
        T[pos+i]=Q[i];
    }
}
int main(){
    char T[200],P[50],Q[50];
    cout<<"Enter text T: ";
    cin>>T;
    cout<<"Enter pattern P: ";
    cin>>P;
    cout<<"Enter replacement Q: ";
    cin>>Q;
    int K=index(T,P);
    while(K!=-1){
        REPLACE(T,K,P,Q);
        K=index(T,P);
    }
    cout<<"Updated Text T: "<<T<<endl;
    return 0;
}
