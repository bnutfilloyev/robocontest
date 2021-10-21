#include <bits/stdc++.h>
using namespace std;

bool compareNumbers(string str1, string str2)
{
    int n1 = str1.length(), n2 = str2.length();

    if (n1 < n2)
        return true;
    if (n2 < n1)
        return false;

    // If lengths are same
    for (int i = 0; i < n1; i++)
    {
        if (str1[i] < str2[i])
            return true;
        if (str1[i] > str2[i])
            return false;
    }

    return false;
}

void sortLargeNumbers(string arr[], int n)
{
    sort(arr, arr + n, compareNumbers);
}

int main()
{
    string arr[200000] = {};


    int n;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        }

    sortLargeNumbers(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;

    return 0;
}
