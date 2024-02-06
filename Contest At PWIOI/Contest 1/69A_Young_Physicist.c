#include<stdio.h>
 
int main() {
    int n, x, y, z, temp_x = 0, temp_y = 0, temp_z = 0;
 
    scanf("%d", &n);
 
    for(int i = 0; i < n; i++) {
        scanf("%d", &x);
        scanf("%d", &y);
        scanf("%d", &z);
        temp_x += x;
        temp_y += y;
        temp_z += z;
    }
 
    if(temp_x == 0 && temp_y == 0 && temp_z == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
 
    return 0;
}