#include<iostream>
#include<vector>

using namespace std;

int arr[11];
vector<int> v;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    for (int i=n-1;i>=0;i--){
        vector<int>::iterator iter=v.begin();
        for (int j=0;j<arr[i];j++){
            iter++;
        }
        v.insert(iter,i+1);
    }

    for (int i=0;i<v.size();i++)
        cout << v[i] << " ";
    return 0;
}