#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int n;
    int arr1[100] = {0};
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    sort(arr1, arr1+n);
    int max = arr1[0];


    for (int i = 0; i < n; i++)
        if ((arr1[i] >= max) && (arr1[i] < 0)){
            max = arr1[i];
        }
    cout << max;

    return 0;
}