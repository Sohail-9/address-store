// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+10; // 10^15 operations constarints
int main() {
   int N = 8;
    int *p_x = &N;
    cout << "Address of val : - " << &N << endl;
    cout << "Adress of num : - " << p_x << endl;
    *p_x = 11;
    cout << "new val :- " << N << endl;
    cout << "p_x +1  ----"  << p_x +1;
}