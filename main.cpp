#include <iostream>
#include <string>

using namespace std;


void printGreater(int _x, int _y)
{
    if(_x > _y) cout << _x << "가 더 크네!" << endl;
    else if(_y > _x)cout << _y << "가 더 크네!" << endl;
    else cout << "두개가 같다"<< endl;
}

int main()
{
    int a, b;
    cin >> a >>b;
    printGreater(a, b);
}
              



