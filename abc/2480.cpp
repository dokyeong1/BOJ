#include <iostream>

using namespace std;

void print(int a,int b, int c){
    
    if(a==b&&b==c&&a==c) cout << 10000+a*1000;
    else if(a==b||b==c) cout << 1000+b*100;
    else if(a==c) cout << 1000+a*100;
    else if(a!=b&&a!=c&&c!=b)
        if(a>b&&a>c) cout << a*100;
        else if(b>a&&b>c) cout << b*100;
        else cout << c*100;
}

int main(){
    int a,b,c;
    cin >> a>>b>>c;
    print(a,b,c);
    return 0;
}


