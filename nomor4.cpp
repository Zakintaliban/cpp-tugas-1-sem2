#include<iostream>
using namespace std;
int main ()
{
    int arr[10], n, i, sum = 0;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "\nEnter the elements of the array : \n";
    for (i = 0; i < n; i++){
    cout << "input element number " << i + 1 << " = ";
    cin >> arr[i];
}
    cout << endl;
    cout << "Array: \n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (i = 0; i < n; i++){
        sum += arr[i];
    }
    cout << "\nSum of array elements : " << sum;
    return 0;
}