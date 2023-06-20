#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void printf(int ind, vector<int> &ds, int arr[], int n)
{
    if (ind == n)
    {
        for (auto it : ds)
            cout << it << " ";
        cout << endl;
        return;
    }
    ds.push_back(arr[ind]);
    printf(ind + 1, ds, arr, n);
    ds.pop_back();
    printf(ind + 1, ds, arr, n);
}
    int main(){
    int n;
    cout << "Enter the size of the array:->" << endl;
    cin >> n;
    int arr[100];
    cout << "Enter the elements of the array:->" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ds;
    cout << "Subsequences of the array are:->" << endl;5
    printf(0, ds, arr, n);
    return 0;
}