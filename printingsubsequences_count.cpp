#include <bits/stdc++.h>
using namespace std;
int printf(int ind, int s, int sum, int arr[], int n)
{
    if (ind == n){
        if(s==sum){
            return 1;
        }
        else
            return 0;
    }
    s = s + arr[ind];
    int l=printf(ind + 1, s, sum, arr, n);
    s = s - arr[ind];
    int r=printf(ind + 1, s, sum, arr, n);
    return l + r;
}
int main()
{
    int n;
    cout << "Enter the size of the array:->" << endl;
    cin >> n;
    int arr[100];
    cout << "Enter the elements of the array:->" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum;
    cout << "Enter the value of sum:->" << endl;
    cin >> sum;
    cout<<printf(0, 0, sum, arr, n);
    return 0;
}