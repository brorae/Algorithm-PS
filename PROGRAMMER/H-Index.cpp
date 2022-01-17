#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(),citations.end());
    int n = citations.size();
    int max_val = citations[n-1];
    for (int i=0;i<=max_val;i++){
        int index = n- (lower_bound(citations.begin(),citations.end(),i) - citations.begin());
        if (index >= i) answer = i;   
    }
    return answer;
}