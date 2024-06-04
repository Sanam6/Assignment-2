#include <iostream>
using namespace std;
int main()
{

    int a, ans;
    cout << "Enter the Five digit Number : ";
    cin >> a;
    a=a/10;
    ans = (a / 1000) + (a % 10);
    cout << "Sum of fist and the last Second digit of five digit Number is : " << ans;

    return 0;
}