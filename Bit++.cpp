#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin >> n;
    cin.ignore();
    while(n--){
        string str;
        cin >> str;

        if(str=="X++" || str=="++X"){
            count++;
        }
        else{
            count--;
        }

    }
    cout << count;


    return 0;
}
