// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    int target;
    int n;
    cout << "how many  numbers you want to give";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> arr[i];
        arr[i] = m;
    }
    cout << "enter your target";
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "[" << i << "," << j << "]";
                cout << endl;
            }
        }
    }
}