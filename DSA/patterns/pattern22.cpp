#include<bits/stdc++.h>
using namespace std;

/*
pattern -> 

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5 

*/

void pattern22(int n){
   for(int i = 1; i<=n; i++) {
        for(int j = n; j>n-i; j--) {
            cout << j << " ";
        }
        for(int j = 1; j<=2*(n-i)-1; j++) {
            cout << n - i + 1 << " ";
        }
        for(int j = n-i+1; j<=n; j++) {
            if(j == 1) continue;
            cout << j << " ";
        }
        cout << endl;
    }

    for(int i = n-1; i>0; i--) {
        for(int j = n; j>n - i; j--) {
            cout << j << " ";
        }
        for(int j = 1; j<=2*(n-i)-1; j++) {
            cout << n - i + 1 << " ";
        }
        for(int j = n-i+1; j<=n; j++) {
            if(j == 1) continue;
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){

    int n;
    cin >> n;
    pattern22(n);

    return 0;
}