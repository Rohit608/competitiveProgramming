#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,ele;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    cin>>ele;
    int min = abs(a[0]-ele);
    int val;
    for(int i = 1;i<n;i++){
        int temp = abs(a[i]-ele);
        if(temp<min){
            min = temp;
            val = a[i];
        }
    }
    cout<<val;
    return 0;
}
