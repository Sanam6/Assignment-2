#include <iostream>
using namespace std;
int main()
{
    double a, ans;
    cout << "Enter the number of pupils in the class : 45" << endl;
    a = 45;
    ans = (a / 100) * 80; //80 percent of class that recieve A grade
    ans = ans - 17;    // minus no. of boys
    cout << "Number of girls that recieved A grade : " << ans;

    return 0;
}