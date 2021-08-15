#include<iostream>
#include<cstdlib>
#include<vector>
#include<algorithm>

using namespace std;

int gcd(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main(){
    int n,s;
    vector<int> vec;
    cin >> n >> s;
    for (int i=0;i<n;i++){
        int a;
        cin >> a;
        vec.push_back(abs(s-a));
    }
    int ans = vec[0];
    for (int i=1;i<vec.size();i++){
        ans = gcd(ans,vec[i]);
    }
    cout << ans;
    return 0;
}