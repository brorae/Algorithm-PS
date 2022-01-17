#include<iostream>
#include<cmath>

using namespace std;

int n,r,c;
int ans=0;

void divCon(int x,int y,int size){
    if (r==x && c==y){
        cout << ans;
        return ;
    }

    if (r>=x && r<x+size && c>=y && c<y+size){
        divCon(x,y,size/2);
        divCon(x,y+size/2,size/2);
        divCon(x+size/2,y,size/2);
        divCon(x+size/2,y+size/2,size/2);
    }
    else{
        ans += size*size;
    }
}

int main(){
    cin >> n >> r >> c;
    divCon(0,0,pow(2,n));
    return 0;
}