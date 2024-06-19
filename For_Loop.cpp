#include <bits/stdc++.h>
using namespace std;

int main(){

    int a,b;
    cin >> a >> b;
    int n = abs(a-b);
    string arr[] = {"one","two","three","four","five","six","seven","eight","nine"};
    for(int i=0;i<=n;i++){
        if(a<=9){
            cout << arr[a-1] << endl;
            a++;
        }
        else{
            if(a%2==0){
                cout << "even" << endl;
                a++;
            }
            else{
                cout << "odd" << endl;
                a++;
            }
        }
    }


    return 0;
}
