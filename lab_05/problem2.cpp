#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<int>factorization;
void primeFact(int n){
for(int i=2;i*i<=n;i++){
     if(n%i==0){
    while(n%i==0){
        n/=i;
        factorization.push_back(i);
    }
}

}

   if(n>1){
    factorization.push_back(n);
}
}
int main(){
    int n;
    cout<<"Enter the number \n";
    cin>>n;
     primeFact(n);
    for(int i=0;i<factorization.size();i++){
       // if(i==factorization.size()-1)
        cout<<factorization[i]<<" ";
        //else cout<<factorization[i]<<endl;
    }

}