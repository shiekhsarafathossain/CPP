#include <bits/stdc++.h>
using namespace std;


void reverse_num(int n){
    int r;
    int rev=0;
    while(n>0){


        r = n%10;
        rev = rev*10 + r;
        n = n/10;
    }
    cout << rev << endl;

}

int main(){
    int n;
    cin >> n;

    while(n--){
        int num;
        cin >> num;
        reverse_num(num);
    }



    return 0;
}
