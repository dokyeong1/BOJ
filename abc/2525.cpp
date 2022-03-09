#include <iostream>

using namespace std;

void print(int h,int m, int c){
    
    int temp;
    m+=c;
    
    temp=m/60;
    m%=60;
    h+=temp;
    
    if(h>=24) h-=24;
    cout << h <<" "<<m;

}

int main(){
    int a,b,c;
    cin >> a>>b>>c;
    print(a,b,c);
    return 0;
}



