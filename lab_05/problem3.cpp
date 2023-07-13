#include<bits/stdc++.h>
using namespace std;

int getGcd(int a, int b, int& x, int& y) {
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
int main(){
    int a,b;
    cout<<"Enter any two numbers\n";
    cin>>a>>b;
    int x,y;
    cout<<"So the Gcd is "<<getGcd(a,b,x,y)<<" CoEfficents are "<<x<<" "<<y<<endl;

}