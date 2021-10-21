#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>

using namespace std;

bool isPrime(int n){
    if (n < 2) return false; // 에라토스테네스의 체 
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true; 
}

int solution(string numbers) {
    vector<char> v;
    set<int> num;
    int answer = 0;
    for (int i=0;i<numbers.size();i++){
        v.push_back(numbers[i]);
    }
    sort(v.begin(),v.end());
    do{
        string tmp = "";
        for (int i=0;i<v.size();i++){
            tmp+= v[i];
            num.insert(stoi(tmp));
        }
    }while(next_permutation(v.begin(),v.end()));

    for (auto it=num.begin();it!=num.end();it++){
        if (isPrime(*it)) answer++;
    }

    return answer;
}