#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
vector<ll>Prime;
void sieve(ll range){
    vector<bool>is_Prime(range,true);
    for(ll i=2;i*i<=range;i++){
        for(ll j=i*i;j<=range;j+=i){
            is_Prime[j]=false;
        }
    }
    for(ll i=2;i<=range;i++){
        if(is_Prime[i]){
            Prime.push_back(i);
        }
    }

}
int main(){
    cout<<"Enter the range\n";
    cin>>n;
    sieve(n);
    for(int i=0;i<Prime.size();i++){
cout<<Prime[i]<<" ";
    }

    return 0;
}