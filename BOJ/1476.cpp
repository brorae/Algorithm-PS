#include<iostream>

using namespace std;

int solution(int a, int b, int c){
    int result = 0;
    if (a==b && b==c)
        return a;
    if (a+15 == b && ((b==c) || (b==c+19))) 
        return b;
    for (int i=1;i<550;i++){
        for (int j=1;j<550;j++){
            for (int k=1;k<550;k++){
                if (15 * i + a == 28 * j + b && 28 * j + b == 19 *k + c){
                    result = 15 * i + a;
                    return result;
                }
            }
        }
    }
    return 0;
}

int main(){
    int e,s,m;
    cin >> e >> s >> m;
    cout << solution(e, s, m);
    return 0;
}