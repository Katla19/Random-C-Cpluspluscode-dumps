#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    int t;
    int min=INT_MAX,max=INT_MIN,i=0;
    while (cin&&cin.get()!='\n'){
        if (cin>>t){
            a.push_back(t) ;
            if(a[i]<min){
                min=a[i];
            }
            if(a[i]>max){
                max=a[i];
            }
            i++;
        }
    }
    cout<<"max:"<<max<<endl<<"min:"<<min;
}