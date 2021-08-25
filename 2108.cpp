#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int arr[8001] = {0,};
    vector<int> v;
    int n;
    double sum = 0;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        v.push_back(a);
        arr[a+4000]++;
        sum += a;    
    }
    int size = v.size();
    cout << round(sum/size) << "\n";
    sort(v.begin(),v.end());
    cout << v[size/2] << "\n";
    int max = -1;
    int max_val;
    for (int i=0;i<8001;i++){
        if (arr[i] > max){
            max = arr[i];
            max_val = i;
        }
    }
    for (int i=0;i<8001;i++){
        if (max == arr[i] && i != max_val){
            max = arr[i];
            max_val = i;
            break;
        }
    }
    cout << max_val-4000 << "\n";
    cout << v[size-1] - v[0] << "\n";
    return 0;
}