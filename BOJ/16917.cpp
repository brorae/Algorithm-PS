#include<iostream>
#include<algorithm>

using namespace std;


int main(){
    int a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;
    int big,small,sub,value;
    if (x > y){
        big = x;
        small = y;
        sub = x-y;
        value = a;
    }
    else{
        big = y;
        small = x;
        sub = y-x;
        value = b;
    } 
    cout << min({a*x + b*y, 2*small*c + sub*value, 2*big*c});
    return 0;
}