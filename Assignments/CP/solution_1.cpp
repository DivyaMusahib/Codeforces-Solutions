// 1. Given an empty list and a stream of N numbers. Print min, max, sum, average and 
// mode (optional and if there are multiple modes then print any) after insertion of each 
// element from the stream to the list.
// Example Input:
// 5
// 2 4 3 2 -3
// Example output
// ▪ min, max, sum, average and mode after addition of 2 is 2, 2, 2, 2, 2.
// ▪ min, max, sum, average and mode after addition of 4 is 2, 4, 6, 3, 4.
// ▪ min, max, sum, average and mode after addition of 3 is 2, 4, 9, 3, 4.
// ▪ min, max, sum, average and mode after addition of 2 is 2, 4, 11, 2.75, 2.
// ▪ min, max, sum, average and mode after addition of -3 is -3, 3, 8, 1.6, 2.
// mode is optional so skipping it will make code shorter

#include<iostream>
using namespace std;

int main(){

    int N;
    cin >> N;

    int arr[N], min, max, sum=0;
    float average=0, count=0;

    for(int i=0; i<N; i++){
        cin >> arr[i];
        if(i==0){
            min=arr[0], max=arr[0];
        }
        if(arr[i]<=min) min = arr[i];
        if(arr[i]>=max) max = arr[i];
        sum += arr[i];
        count++;
        average = sum/(float)count;

        cout << "min, max, sum and average after addition of "<< arr[i] << " is " << min << ", " << max << ", " << sum << ", " << average << ".\n";
    }
    return 0;
}