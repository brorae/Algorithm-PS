#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int solution(int *pobi, int *crong){
    if(pobi[1] != pobi[0]+1 || crong[1] != crong[0]+1){
        return -1;
    }
    string pobi_str[2], crong_str[2];
    for(int i=0;i<2;i++){
        pobi_str[i] = to_string(pobi[i]);
        crong_str[i] = to_string(crong[i]);
    }
    vector<int> v1,v2;
    for(int i=0;i<2;i++){
        int sum = 0;
        int mul = 1;
        for(int j=0;j<pobi_str[i].length();j++){
            sum += int(pobi_str[i][j]-'0');
            mul = mul * int(pobi_str[i][j]-'0');
        }
        v1.push_back(sum);
        v1.push_back(mul);
        sum = 0;
        mul = 1;
        for(int j=0;j<crong_str[i].length();j++){
            sum += int(crong_str[i][j]-'0');
            mul = mul * int(crong_str[i][j]-'0');
        }
        v2.push_back(sum);
        v2.push_back(mul);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    if (v1[3] > v2[3]) return 1;
    else if (v1[3] < v2[3]) return 2;
    else if (v1[3] == v2[3]) return 0;
    else return -1;
}



int main(){
    int a[2] = {5,6};
    int b[2] = {11,12};
    cout << solution(a,b);
}