/*
When a tree is reflected across an imaginary straight vertical line right or left of the entire tree, the resultant tree hence obtained is the mirror tree of the original tree.

Your task is to write a program to check if two given trees are mirrors of each other.

Input
First line consists of the number of nodes N.
Next N-1 lines each describes the first tree. Each line has two integers U and V and a letter 'R' or 'L', denoting that V is the left or the right child of U.
Next N-1 lines each describes the second tree. Each line has two integers U and V and a letter 'R' or 'L', denoting that V is the left or the right child of U.

Output
Print "yes" if the two trees are mirrors of each other and "no" otherwise

Sample Input 0

3
1 2 R
1 3 L
1 2 L
1 3 R
Sample Output 0

yes
Explanation 0

The first tree is

  1 

 / \ 

3   2
The second tree is

  1 

 / \ 

2   3
Clearly, both the trees are mirrors of each other.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,k1,j=0,k2;
    char k3;
    cin>>n;
    int a[1005][1005],b[1005][1005];
    for(int i=0;i<n-1;i++){
        cin>>k1>>k2>>k3;
        a[0][0]=k1;
        k3=='R'?a[k1][0]=k2:a[0][k1]=k2;
    }
    for(int i=0;i<n-1;i++){
        cin>>k1>>k2>>k3;
        b[0][0]=k1;
        k3=='R'?b[k1][0]=k2:b[0][k1]=k2;
    }
    for(int i=0;i<n;i++){
        if(a[0][i]!=b[i][0]){
            j=1;
        }
    }
    j==0?printf("yes"):printf("no");
    return 0;
}
