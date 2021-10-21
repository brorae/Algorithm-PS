#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> v = {"4","1","2"};

string solution(int n) {
    string answer = "";
    int num = n;
    while (num > 0){
        int a = num % 3;
        answer = v[a] + answer;
        if (num % 3 == 0)
            num = num/3 -1;
        else
            num /= 3;
    }
    return answer;
}