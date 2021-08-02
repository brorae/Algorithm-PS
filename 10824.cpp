#include<iostream>
#include<string>
#include<queue>

using namespace std;

int main(){
    string str;
    string a = "", b = "";
    queue<string> que;
    int count = 0;
    for (int i=0;i<4;i++){
        cin >> str;
        que.push(str);
    }
    while(!que.empty()){
        if (count < 2)
            a += que.front();
        else
            b += que.front();
        que.pop();
        count++;
    }
    cout << stol(a) + stol(b) ;
    return 0;
}


//stoi string -> int
//to_string int -> string