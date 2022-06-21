/*
Amoeba are famous for dividing. A single amoeba divides into two.

As a part of your research you want exactly N amoeba cells. Not one less, not one more. You cannot kill or throw away any amoeba cells.

You can ask the team to give you some amoebas to begin with.

Your task is to calculate the minimum number of amoeba cells that you can ask for so that in the end you end up with N amoebas.

Note that you cannot control the division of amoeba. Whenever you take an amoeba cell, it WILL divide into two the next day.

See the sample case for clarity

Input

Only one integer n

Output

Only one integer, the minimum number of amoeba you need

Notes

n is a valid integer

Sample Case Explanation :

An optimal strategy would be to take 1 amoeba cell on day 1 and 1 more amoeba cell on day 3.

The amoeba cell you took on day 1 becomes 4 amoeba cells on day 3.

Hence on day 3 you have exactly 5 amoeba cells.

Note that there is no restriction on the number of days you take to get n amoeba cells.

Sample Input 0

5
Sample Output 0

2
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n_check(int j,int n){
    if(pow(2,j)==n || (pow(2,j)<n && pow(2,j+1)>n) ){
        return(j);
    }
    else{
        return(n_check(j+1,n));
    }
}
int set(int i,int n){
    if(n==0){
        return(i);
    }
    else{
        return(set(i+1,n-pow(2,n_check(0,n))));
    }
}
int main() {
    int n;
    cin>>n;
    cout<<set(0,n);
    return 0;
}
