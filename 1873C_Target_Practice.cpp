// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     for(int k=0; k<t; k++){
//     int count=0;

//     for(int i=1; i<=10; i++){
//         char arr[10];
//         for(int j=0; j<10; j++){
//             cin >> arr[j];
//             if((i==1 || i==10)){
//                 if(arr[j]=='X')count = count + 1;
//             }
//             else if(i==2 || i==9){
//                 if(arr[j]=='X'){
//                     if(j==0 || j==9) count = count  = 1;
//                     else count = count + 2;
//                 }
//             }

//              else if(i==3 || i==8){
//                 if(arr[j]=='X'){
//                     if(j==0 || j==9) count = count  = 1;
//                     else if(j==1 || j==8)count = count + 2;
//                     else count = count + 3;
//                 }
//             }

//              else if(i==4 || i==7){
//                 if(arr[j]=='X'){
//                     if(j==0 || j==9) count = count  = 1;
//                     else if(j==1 || j==8)count = count + 2;
//                     else if(j==2 || j==7)count = count + 3;
//                     else count = count + 4;
//                 }
//             }

//              else if(i==5 || i==6){
//                 if(arr[j]=='X'){
//                     if(j==0 || j==9) count = count  = 1;
//                     else if(j==1 || j==8)count = count + 2;
//                     else if(j==2 || j==7)count = count + 3;
//                     else if(j==3 || j==6)count = count + 4;
//                     else count = count + 5;
//                 }
//             }


//         }
        
//             cout << "line " << i << "count is " << count << "\n";
//     }

//     cout << count << "\n";

//     }




// }





#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int k=0; k<t; k++){
        int count=0;

        for(int i=1; i<=10; i++){
            char arr[10];
            for(int j=0; j<10; j++){
                cin >> arr[j];
                if(arr[j]=='X'){
                    if((i==1 || i==10)) count = count + 1;
                    else if (i==2 || i==9){
                        if(j==0 || j==9) count = count+1;
                        else count = count + 2;
                    }
                    else if(i==3 || i==8){
                        if(j==0 || j==9) count = count+1;
                        else if(j==1 || j==8) count = count+2;
                        else count = count +3;
                    }
                    else if(i==4 || i==7){
                        if(j==0 || j==9) count = count+1;
                        else if(j==1 || j==8) count = count+2;
                        else if(j==2 || j==7) count = count+3;
                        else count = count + 4;
                    }
                    else if(i==5 || i==6){
                        if(j==0 || j==9) count = count+1;
                        else if(j==1 || j==8) count = count+2;
                        else if(j==2 || j==7) count = count+3;
                        else if(j==3 || j==6) count = count+4;
                        else count = count + 5;
                    }
                }
            }
            // cout << "the count of " << i << "th line is " << count << "\n";       
        }
        cout << count << "\n";
    }
}