#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double A,B,C;
    double D,X1,X2,X;
    cout<<"Enter coefficients A,B,C: ";
    cin>>A>>B>>C;
    D=(B*B)-(4*A*C);
    if(D>0){
        X1=(-B+sqrt(D))/(2*A);
        X2=(-B-sqrt(D))/(2*A);
        cout<<"Two real solutions: ";
        cout<<"X1= "<<X1<<endl;
        cout<<"X2= "<<X2<<endl;
    }
    else if(D==0){
        X=-B/(2*A);
        cout<<"Unique solution\n";
        cout<<"X= "<<X<<endl;
    }
    else{
        cout<<"No real solutions"<< endl;
    }
    return 0;
}
