#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "12-45";
    string d = "-";
    string n01 = s.substr(0, s.find(d));
    string n02 = s.erase(0, n01.length() + d.length());
    cout<<stoi(n01)<<endl<<stoi(n02)<<endl;

    int t[5][5];

    for (int i = 0;i<5;i++)
        for(int j = 0;j<5;j++)
            t[i][j] = 0;
    for(int i = 0;i<5;i++){
        t[i][i] = rand()%2;
        cout<<t[i][i]<<endl;
    }
    for(int k=2;k<=5;k++){
        for(int i = 0;i<5-k+1;i++){
            int j = i + k -1;
            t[i][j] = t[i][i] + t[i+1][j];
        }
    }

    for (int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}