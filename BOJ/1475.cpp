#include<iostream>
#include<string>

using namespace std;

int main(){
    int arr[11] = {0,};
    string num;
    cin >> num;
    for (int i=0;i<num.size();i++){
        int a = int(num[i]-'0');
        if (a==9)
            arr[6]++;
        else
            arr[a]++;
    }
    int max = -1;
    for (int i=0;i<9;i++){
        if(i == 6){
            if(arr[i] % 2 == 0)
                arr[i] = (arr[i]/2);
            else
                arr[i] = (arr[i]/2) + 1;
        }
            
        if (arr[i] > max)
            max = arr[i];
    }
    cout << max;
    return 0;
}