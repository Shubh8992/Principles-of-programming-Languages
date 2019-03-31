#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
    cout << "Enter size of array : ";
    cin >> n;
    int a[n];
    cout << "Enter elements of array : ";
    for (int i = 0; i < n; i++)
        cin >> a[i];    
    sort(a,a+n);
    cout<<"Second Largest element:"<<a[n-2];
}
