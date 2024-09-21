#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int strtoint(string s) {
    int ans = 0;
    int x = 1;
    for(int i = s.size() - 1; i >= 0; i--) {
        int temp = int(s[i] - '0');
        ans += x * temp;
        x *= 10;
    }
    return ans;
}

string colNumberToString(int colNo) {
    string ans = "";
    while (colNo > 0) {
        colNo--;  // Adjust for 1-based indexing in column letters
        ans += char('A' + colNo % 26);
        colNo /= 26;
    }
    reverse(ans.begin(), ans.end());  // The string needs to be reversed
    return ans;
}

int colStringToNumber(string col) {
    int colNo = 0;
    for (char c : col) {
        colNo = colNo * 26 + (c - 'A' + 1);
    }
    return colNo;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        char ch = 'C';
        if(s[0] == 'R' && s.find(ch) != string::npos && s[1]!='C' && s[1]<='9' && s[1]>='0') {
            bool foundC = false;
            string col, row;
            for(int i = 1; i < s.size(); i++) {
                if(s[i] == 'C') {
                    foundC = true;
                } else if(foundC) {
                    col.push_back(s[i]);
                } else {
                    row.push_back(s[i]);
                }
            }
            int colNo = strtoint(col);
            int rowNo = strtoint(row);
            
            string ans = colNumberToString(colNo);
            cout << ans << rowNo << "\n";
        } else {
            string row, col;
            for(char c : s) {
                if(c >= '0' && c <= '9') {
                    row.push_back(c);
                } else {
                    col.push_back(c);
                }
            }
            int rowNo = strtoint(row);
            int colNo = colStringToNumber(col);
            cout << 'R' << rowNo << 'C' << colNo << "\n";
        }
    }
}

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// ll a1 = 26, a2 = pow(26,2) , a3 = pow(26,3) , a4 = pow(26,4), a5 = pow(26,5);

// int main(){
//     int t;
//     cin >> t;
//     while(t--) {
//         string s;
//         cin >> s;
//         if(s[0]=='R'){
//             // cout << "rc to alpha";
//             bool foundC = false;
//             string col ;
//             bool foundR = false;
//             string row ;
//             for(int i=0; i<s.size(); i++) {
//                 if(foundC == true) col.push_back(s[i]);
//                 else if(s[i]=='C') foundC = true;
//                 else if(s[i]=='R') foundR = true;
//                 else if(foundR == true && foundC == false) row.push_back(s[i]); 
//             }
//             ll colNo = stoll(col);
//             ll rowNo = stoll(row);

//             string ans = "";

//             if(colNo<=a1){
//                 colNo--;
//                 char s = 'A' + colNo;
//                 ans += s;

//             } else if(colNo <= a1+a2) {
//                 colNo = colNo - a1-1;
//                 char s1 = colNo/26 + 'A';
//                 char s2 = colNo % 26 + 'A';
//                 ans += s1;
//                 ans += s2;                                
//             } else if(colNo <= a1+a2+a3) {
//                 // colNo = colNo - a1 - a2 - 1;
//                 char s1 = colNo/a2 + 'A';
//                 char s2 = (colNo%a2)/a1 + 'A';
//                 char s3 = ((colNo%a2)/a1)%a1 + 'A';
//                 ans += s1;
//                 ans += s2;
//                 ans += s3;

//             } else if(colNo <= a1+a2+a3+a4){

//             }
//             cout << ans << rowNo;


//         } else {
//             cout << "alphatorc";
//         }
//     }
// }