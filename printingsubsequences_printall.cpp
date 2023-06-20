#include<bits/stdc++.h>
using namespace std;
void printf(int ind,vector<int> &ds,int s,int sum,int arr[],int n)
{
    if(ind==n){
        if(s==sum){
            for(auto it:ds)
                cout << it << " ";
            cout << endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    s = s + arr[ind];
    printf(ind + 1, ds, s, sum, arr, n);
    s = s - arr[ind];
    ds.pop_back();
    printf(ind + 1, ds, s, sum, arr, n);
}
int main()
{
    int n;
    cout << "Enter the size of the array:->" << endl;
    cin >> n;
    int arr[100];
    cout << "Enter the elements of the array:->" << endl;
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    int sum;
    cout << "Enter the value of sum:->" << endl;
    cin >> sum;
    vector<int> ds;
    printf(0, ds, 0, sum, arr, n);
    return 0;
}