/**\
 * Given two numbers n and b . Determine whether n is  a pseudoprime to base b .
 * 
*/





#include<bits/stdc++.h>
using namespace std;
set<int>Prime;
void primeFact(int n){
for(int i=2;i*i<=n;i++){
     if(n%i==0){
Prime.insert(i);
    while(n%i==0){
        n/=i;
        //(i);
    }
}

}

   if(n>1){
    Prime.insert(n);
}
}


int power (int x,int y){
    int res=1;
    while(y){
        if(y&1){
            res=res*x;
        }
        y>>=1;
        x=x*x;
    }
    return res;
}



int main(){
    cout<<"Enter the number and Base \n";
    long n,b;
    cin>>n>>b;
    bool ok =true;
    primeFact(n);
    for(auto x:Prime){
        int p=power(b,x-1);
        if(p%x==1){
            continue;
        }
        else {
ok=false;
break;
        }

    }
    if(!ok)
    cout<<"Not Pseudo\n";
    else
    cout<<"Pseudo\n";
    return 0;
}