#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string local;
        getline(cin, local);
        cout << "> " << local <<endl;
    }

    return 0;
}