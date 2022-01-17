#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[10001] = {0};

    // 숫자 개수 카운트
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        arr[a] += 1;
    }

    // 각 숫자를 개수만큼 출력해주기
    for(int i=1;i<=10000;i++)
        for (int j=0;j<arr[i];j++)
            cout << i << "\n";
    return 0;
}