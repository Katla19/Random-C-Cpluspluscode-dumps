/*
Given an array of integers, replace every element with the greatest element on the right side in the array. Replace last element with 0 as there no element on the right side of it.

Input Format

First line contains N , the number of Numbers. Next line contains N integers a[1]..a[n] the numbers

Constraints

1<= N <= 10^5
1<= ai <= 10^5

Output Format

Print the array required

Sample Input 0

6
6 7 4 3 5 2
Sample Output 0

7 5 5 5 2 0 
*/
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxtillnow = -2147483647;
    for(int i=n-1;i>=0;i--){
        if(maxtillnow==-2147483647){
            b[i]=0;
        }
        else{
            b[i]=maxtillnow;
        }
        if(a[i]>maxtillnow)maxtillnow=a[i];
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}