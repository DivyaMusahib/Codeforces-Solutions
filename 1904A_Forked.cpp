#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        long long a,b;
        cin >> a >> b;

        long long Xk, Yk;
        cin >> Xk >> Yk;

        long long Xq, Yq;
        cin >> Xq >> Yq;

        long long count =0;

        if(a!=b){
            long long arr_Xk[8] = {Xk+a, Xk+a, Xk-a, Xk-a, Xk+b, Xk+b, Xk-b, Xk-b};
            long long arr_Yk[8] = {Yk+b, Yk-b, Yk+b, Yk-b, Yk+a, Yk-a, Yk+a, Yk-a};

            long long arr_Xq[8] = {Xq+a, Xq+a, Xq-a, Xq-a, Xq+b, Xq+b, Xq-b, Xq-b};
            long long arr_Yq[8] = {Yq+b, Yq-b, Yq+b, Yq-b, Yq+a, Yq-a, Yq+a, Yq-a};


            for(int n=0; n<8; n++){
                for(int m=0; m<8; m++){
                    if(arr_Xk[n]==arr_Xq[m] && arr_Yk[n]==arr_Yq[m]) count++;
                }
            }

            cout << count << "\n";
        }

        else if(a==b){
            long long arr_Xk[8] = {Xk+a, Xk+a, Xk-a, Xk-a,};
            long long arr_Yk[8] = {Yk+b, Yk-b, Yk+b, Yk-b};

            long long arr_Xq[8] = {Xq+a, Xq+a, Xq-a, Xq-a};
            long long arr_Yq[8] = {Yq+b, Yq-b, Yq+b, Yq-b};


            for(int n=0; n<4; n++){
                for(int m=0; m<4; m++){
                    if(arr_Xk[n]==arr_Xq[m] && arr_Yk[n]==arr_Yq[m]) count++;
                }
            }

            cout << count << "\n";  
        }

    }
}