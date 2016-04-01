
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int NUMBER = -9;
    int neg = NUMBER >> 31;
    int pos = (NUMBER ^ neg) + (~neg + 1);
    int pos_num_3 = pos + pos + pos;
    int pos_divide_4 = pos_num_3 >> 2;
    int divide_4 = (pos_divide_4 ^ neg) + (~neg + 1);
    cout << neg << endl;
    cout << pos << endl;
    cout << ~neg << endl;
    cout << pos_num_3 << endl;
    cout << divide_4 << endl;
}
