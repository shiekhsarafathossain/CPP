#include <bits/stdc++.h>

using namespace std;

int main(){

    string str;

    cin >> str;
    if(str[0]==toupper(str[0])){
        cout << str;
    }
    else{
        str[0] = str[0]-32;
    cout << str;
    }


    return 0;
}
