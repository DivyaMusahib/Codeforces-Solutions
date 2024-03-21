// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     for(int i=0; i<t; i++){
//         long long x,y,a,b;
//         cin >> x >> y;
//         cin >> a >> b;

//         long long cost =0;

//         //case-1 both positive
//         if(x>0 && y>0){
//             int tempcost =  a*(x+y);

//             if(x>y) cost = cost + b*(y) + a*(x-y);
//             else cost = cost + b*x + a*(y-x);

//             if(tempcost<cost) cost = tempcost;
//         }


//         //case-2 both negative
//         else if(x<0 && y<0){
//             int tempcost =  a*(abs(x+y));

//             if(x>y) cost = cost + b*(abs(x)) + a*(abs(y-x));
//             else cost = cost + b*(abs(y)) + a*(abs(x-y));

//             if(tempcost<cost) cost = tempcost;
//         }


//         //case-3
//         else cost = cost + a*(abs(x)) + a*(abs(y));

//         // cout << "ans is " << cost << "\n";
//         cout << cost << "\n";

//     }

//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     for (int i = 0; i < t; i++) {
//         long long x, y, a, b;
//         cin >> x >> y;
//         cin >> a >> b;

//         long long cost = 0;

//         // Calculate cost based on cases
//         if (x >= 0 && y >= 0) {
//             cost = min(a * (x + y), min(b * min(x, y) + a * abs(x - y), b * max(x, y) + a * (x - y)));
//         } else {
//             cost = a * (abs(x) + abs(y));
//         }

//         cout << cost << "\n";
//     }

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        long long x, y, a, b;
        cin >> x >> y;
        cin >> a >> b;

        long long cost = 0;

        if (x >= 0 && y >= 0) {
            cost = min(a * (x + y), b * min(x, y) + a * abs(x - y));
        }

        else if (x < 0 && y < 0) {
            cost = min(a * (abs(x + y)), b * abs(max(x, y)) + a * abs(x - y));
        }

        else {
            cost = a * (abs(x) + abs(y));
        }

        cout << cost << "\n";
    }

    return 0;
}
