#include <bits/stdc++.h>
using namespace std;

int main(){

    int s,t;

    cin >> s >> t;
    int a,b;
    cin >> a >> b;
    int m,n;
    cin >> m >> n;
    int apples[m];
    int oranges[n];

    for(int i=0;i<m;i++){
        cin >> apples[i];
    }

    for(int i=0;i<n;i++){
        cin >> oranges[i];
    }

    for(int i=0;i<m;i++){
        apples[i] = a + apples[i];
    }

    for(int i=0;i<n;i++){
        oranges[i] = b + oranges[i];
    }

    int counta=0;
    for(int i=0;i<m;i++){
        if(s<= apples[i] && apples[i] <=t){
            counta++;
        }

    }

    cout << counta << endl;

    int countb=0;
    for(int i=0;i<n;i++){
        if(s<= oranges[i] && oranges[i] <=t){
            countb++;
        }

    }
    cout << countb << endl;




    return 0;
}
