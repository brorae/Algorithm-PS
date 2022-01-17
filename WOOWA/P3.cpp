#include<iostream>
#include<string>

using namespace std;

string solution(string word){
    for (int i=0;i<word.size();i++){
        if(word[i] != ' '){
            if(word[i] >= 'A' && word[i] <= 'Z'){
                word[i] = 'A' + 'Z' - word[i];
            }
            else{
                word[i] = 'a' + 'z' - word[i];
            }
        }
    }
    return word;
}

int main(){
    string word;
    getline(cin,word);
    cout << solution(word);
}