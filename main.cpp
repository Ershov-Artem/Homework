#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int *A;
   int N,t;
   cin>>N;
   A = new int[N];
     for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
   for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (A[j] <
                 A[j + 1]) {
                t = A[j];
                A[j] = A[j + 1];
                A[j + 1] = t;
            }
        }
    }
    for (int i=0;i < N;i++){
        cout<<A[i]<<' ';
    }
}
