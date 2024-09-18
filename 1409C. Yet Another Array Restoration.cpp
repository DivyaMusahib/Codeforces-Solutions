#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin >> t;
while(t--){
int n,x,y;
cin >> n >> x >> y;
int z = y-x;
vector<int>arr;
int temp = n-1;
while(temp>=1){
if(z%temp == 0) break;
temp--;
}

int diff = z/temp;
int count = 0;
for(int i=x; i<=y; i+=diff){
arr.emplace_back(i);
count++;
}

n = n - count;
int last = x - diff;
while(last>0 && n>0){
arr.emplace_back(last);
last -= diff;
n--;
}

int end = y + diff;

while(n>0){
arr.emplace_back(end);
end += diff;
n--;
}

for(auto it : arr) cout << it << " ";

cout << "\n";

}
}