#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,count=0;;
    cin >> n;
    int arr[n][3];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i][0]==1 && arr[i][1]==1 || arr[i][0]==1 && arr[i][2]==1 || arr[i][1]==1 && arr[i][2]==1)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}
