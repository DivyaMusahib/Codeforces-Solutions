#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    for (int i = 0; i < t; i++) {
        int right, left, limit;
        cin >> right >> left >> limit;
        vector<int> arr_r(right);
        vector<int> arr_l(left);
 
        for (int j = 0; j < right; j++) {
            cin >> arr_r[j];
        }
 
        for (int j = 0; j < left; j++) {
            cin >> arr_l[j];
        }
 
        int count = 0;
        for (int j = 0; j < right; j++) {
            for (int k = 0; k < left; k++) {
                if ((arr_r[j] + arr_l[k]) <= limit) count++;
            }
        }
 
        cout << count << endl;
    }
    return 0;
}