#include<bits/stdc++.h>
using namespace std;
int getGcd(int a,int b,int &x,int &y){
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = getGcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
//int modInverse()
int main(){
cout<<"How many equation exists\n";
int len;
cin>>len;
vector<int>a(len);
vector<int>m(len);
vector<int>M(len);
long MM=1;
cout<<"a m\n";
for(int i=0;i<len;i++){
    cin>>a[i]>>m[i];MM=m[i]*MM;
}
//cout<<MM<<endl;
for(int i=0;i<len;i++){
    M[i]=MM/m[i];
}
vector<int>MINV(len);
for(int i=0;i<len;i++){

int x,y;
//cout<<M[i]<<" "<<a[i]<<endl;
int g = getGcd(M[i],m[i],x,y);
//cout<<x<<endl;

MINV[i]=(x%m[i]+m[i])%m[i];
//cout<<MINV[i]<<endl;

}

long long sum=0;
for(int i=0;i<len;i++){
    sum+=(a[i]*M[i]*MINV[i]);
}

cout<<"X is "<<sum%MM<<endl;


    return 0;
}