#include<iostream>
#include<iostream>

using namesapce std;

int arr[1001][11];

int main(){
  int t;
  for(int i=0;i<t;i++){
    for(int j=0;j<10;j++){
      cin >> arr[i][j];
    }
    sort(arr[i],arr[i]+10);
  }
  for (int i=0;i<t;i++){
    cout << arr[i][2] << "\n";
  }
}
