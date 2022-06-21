/*
Mickey came across an interesting series as follows : FN = FN-1 xor FN-2 + FN-3

He is a better at managing the clubhouse than progamming, so he asked for your help.
He has given you four values, F0, F1, F2 and N. Your task is to write a program to tell him the value of FN.

Input
Four integers separated by spaces denoting F0, F1, F2 and N.

Output
Print one integer equal to the value of FN

Notes
1 ≤ N ≤ 15

Sample Input 0

1 2 3 5
Sample Output 0

6
*/#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int solution(int n,int a,int b ,int c){
    return n==0?a:n==1?b:n==2?c:solution(n-1,a,b,c)^(solution(n-2,a,b,c)+solution(n-3,a,b,c));
}
int main() {
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    cout<<solution(n,a,b,c);
    return 0;
}
