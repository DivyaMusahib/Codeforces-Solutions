#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, l, arr[1001] = {0};
    cin >> n;
    while (n--)
    {
        cin >> l;
        arr[l] += 1;
    }

    int height = *max_element(arr, arr + 1001);
    int numberOfTowers = 1001 - count(arr, arr + 1001, 0);

    cout << height << " " << numberOfTowers << endl;
}