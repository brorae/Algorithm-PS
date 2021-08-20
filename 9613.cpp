#include<iostream>
#include<vector>

using namespace std;

int gcd(int a, int b) {
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        vector<int> v;
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            v.push_back(a);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                sum += gcd(v[i],v[j]);
            }
        }
        cout << sum << "\n";
    }
    return 0;
}