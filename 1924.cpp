#include<iostream>

using namespace std;

string arr[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};

int main(){
    int x,y;
    int ans;
    cin >> x >> y;
    if (x == 1)
        ans = (y % 7)-1;
    else if (x == 2){
        ans = (31+y) % 7-1;
    }
    else if (x == 3){
        ans = (59+y) % 7-1;
    }
    else if (x == 4){
        ans = (90+y) % 7-1;
    }
    else if (x == 5){
        ans = (120+y) % 7-1;
    }
    else if (x == 6){
        ans = (151+y) % 7-1;
    }
    else if (x == 7){
        ans = (181+y) % 7-1;
    }
    else if (x == 8){
        ans = (212+y) % 7-1;
    }
    else if (x == 9){
        ans = (243+y) % 7-1;
    }
    else if (x == 10){
        ans = (273+y) % 7-1;
    }
    else if (x == 11){
        ans = (304+y) % 7-1;
    }
    else if (x == 12){
        ans = (334+y) % 7-1;
    }
    if (ans == -1){
        ans = 6;
    }
    cout << arr[ans];
    return 0;
}