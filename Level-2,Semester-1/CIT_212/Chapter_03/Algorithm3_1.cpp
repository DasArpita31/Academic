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
    for(i=0;i<=lenT-lenP ;i++){
        for(j=0;j<lenP;j++){
            if(T[i+j]!=P[j])
            break;
        }
        if(j==lenP)
        return i;
    }
    return -1;
}

void DELETE(char T[],int pos,int lenP){
    int i=pos;
    while(T[i+lenP]!='\0'){
        T[i]=T[i+lenP];
        i++;
    }
    T[i]='\0';
}
int main(){
    char T[200],P[100];
    cout<<"Enter text T: ";
    cin>>T;
    cout<<"Enter pattern P: ";
    cin>>P;
    int K=index(T,P);
    while(K!=-1){
        DELETE(T,K,length(P));
        K=index(T,P);
    }
        cout<<"Updated Text T: "<<T<<endl;
    return 0;
}
