#include<iostream>
#include<vector>

using namespace std;

vector<int> aChicken;
vector<int> bChicken;

int main(){
    int a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;
    int min;
    int sub;
    if (x > y){
        min = y;
        sub = x-y;
    }
    else{
        min = x;
        sub = y-x;
    } 
    min(a * x + b * y, 2 * min * c + sub
}