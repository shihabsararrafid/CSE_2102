/*
Given a number r as input ; find the next larger permutation in lexicographic order
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cout<<"Enter a number \n";
    cin>>n;
    string strNew = n;
    reverse(strNew.begin(),strNew.end());
    if(is_sorted(strNew.begin(),strNew.end())){
        cout<<"No larger permutation is available\n";
    }
    else{
        int len = n.size();
        int index;
        for(int i=len-1;i>0;i--){
            if(n[i]>n[i-1]){
                index=i-1;
                break;
            }
            else continue;
        }
        string str;
        vector<pair<char,int>>charPair;
        pair<char,int>pr;
        for(int i=index+1;i<len;i++){
            if(n[i]>n[index]){
                pr.first=n[i];
                pr.second=i;
                charPair.push_back(pr);
                str.push_back(n[i]);
            }
        }
        sort(charPair.begin(),charPair.end());
        int index2=charPair[0].second;
        //cout<<index2<<endl;
        //cout<<index<<endl;
        swap(n[index],n[index2]);
        sort(n.begin()+index+1,n.end());
        cout<<n<<endl;
    }
    return 0;
}