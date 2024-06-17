#include<bits/stdc++.h>
using namespace std;

int main(){
    int l , d , v , g , r;
    double ans , x;
    cin >> l >> d >> v >> g >> r;
	ans = (double) d / v;
	x = ans;
	while (x - r - g > 0){
		x -=  r + g;
	}
	if (x >= g){
		ans += (double) (r + g) - x;
	}
	ans += (double) (l - d) / v;
	cout << setprecision(10) << ans;
    
    
    // double l,d,v,g,r;
    // cin >> l >> d >> v >> g >> r;
    // int temp = ceil(d/v);
    // int total = g+r;
    //     if(temp < total){
    //         if(temp<=g){
    //             double ans = l/v;
    //             cout << fixed << setprecision(8) << ans;
    //             // cout << "ho";
    //         }
    //         else{
    //             double ans = g+r + (l-d)/v;
    //             cout << fixed << setprecision(8) << ans;
    //         }
    //     }
    // else if(temp % total == 0){
    //     // else{
    //     // cout << "wait";
    //     // if(ceil(d/v) != floor(d/v)){
    //         double ans = temp + (l-d)/v;
    //         cout << fixed << setprecision(8) << ans;
    //         // cout << "hii";
    //     // }
    //     // }
        
    // }
    // else if(temp % total < g){
    //     double ans = l/v;
    //     cout << fixed << setprecision(8) << ans;

    // } 
    // else{
    //     double ans = temp + g + r - temp%total + (l-d)/v;
    //     cout << fixed << setprecision(8) << ans;
    // }
}