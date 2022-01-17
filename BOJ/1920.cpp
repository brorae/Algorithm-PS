#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> v;

int binarySearch(int d)
{
    int s = 0; //시작
    int e = v.size() - 1; //끝
    int m;
    while (s <= e) {
        m = (s + e) / 2;
        if (v[m] == d) return 1;
        else if (v[m] > d) e = m - 1;
        else s = m + 1;
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n;
    for (int i=0;i<n;i++){
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    cin >> m;
    for (int i=0;i<m;i++){
        int num;
        cin >> num;
        cout << binarySearch(num) << "\n";
    }
    return 0;
}