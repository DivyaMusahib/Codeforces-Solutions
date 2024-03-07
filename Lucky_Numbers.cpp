// #include <bits/stdc++.h>
// using namespace std;

// int ans(int n)
// {
//     int max = 0;
//     int min = 10;
//     for (int k = 0;;)
//     {
//         int digit = n % 10;
//         if (digit > max)
//             max = digit;
//         if (digit < min)
//             min = digit;
//         if (n / 10 == 0)
//             break;
//         n = n / 10;
//     }
//     return max - min;
// }

// int main()
// {

//     int t;
//     cin >> t;

//     for (int i = 0; i < t; i++)
//     {
//         int l, r;
//         cin >> l >> r;
//         int n = r - l + 1;
//         int answer;

//         for (int j = l; j <= r; j++)
//         {
//             int maxi = 0;
//             vector<int> arr(n);
//             for (int x = 0; x < n; l++)
//             {
//                 arr[j] = ans(j);
//                 if (arr[j] > maxi)
//                 {
//                     maxi = arr[j];
//                     answer = j;
//                 }
//             }
//         }

//         cout << answer;
//     }

// }


#include <bits/stdc++.h>
using namespace std;

int ans(int n)
{
    int max_digit = 0;
    int min_digit = 10;
    while (n != 0)
    {
        int digit = n % 10;
        max_digit = max(max_digit, digit);
        min_digit = min(min_digit, digit);
        n = n / 10;
    }
    return max_digit - min_digit;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int l, r;
        cin >> l >> r;
        int n = r - l + 1;
        int answer = l;
        int max_difference = 0;

        for (int j = l; j <= r; j++)
        {
            int difference = ans(j);
            if (difference > max_difference)
            {
                max_difference = difference;
                answer = j;
            }
        }

        cout << answer << endl;
    }

    return 0;
}
