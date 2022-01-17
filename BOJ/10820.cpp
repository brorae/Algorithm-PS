#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    for (int i=0;i<100;i++){
        int big = 0, small = 0, number = 0, space = 0;
        getline(cin,str);
        if (str.length() == 0)
            break;
        for (int j=0;j<str.length();j++){
            // cout << "str:"<< str << "\n";
            if ( 'A' <= str[j] && str[j] <= 'Z')
                big++;
            else if ('a' <= str[j] && str[j] <= 'z')
                small++;
            else if ( '0' <= str[j] && str[j] <= '9')
                number++;
            else if (str[j] == ' ')
                space++;
        }
        cout << small << " " << big << " " << number << " " << space << "\n";
    }
    return 0;
}