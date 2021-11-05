#include<iostream>

using namespace std;

int main(){
    int t,x1,y1,x2,y2,n,cx,cy,r;
    int cnt;
    cin >> t;
    for (int i=0;i<t;i++){
        cnt = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> n;
        for (int j=0;j<n;j++){
            cin >> cx >> cy >> r;
            int d1 = (cx-x1)*(cx-x1) + (cy-y1)*(cy-y1);
            int d2 = (cx-x2)*(cx-x2) + (cy-y2)*(cy-y2);
            if (d1<r*r && d2<r*r) continue;
            else if (d1<r*r || d2<r*r) cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}