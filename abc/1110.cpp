#include <iostream>

using namespace std;

void print(int a){
    
    int m,n,cnt=0,sum=0;
   
    m=a%10;
    n=a/10;
    while(true){
        sum=n+m;
        if(sum>=10){
            sum%=10;
        }
        n=m;
        m=sum;
        cnt++;
        if(n*10+m==a)
            break;
    }
    cout << cnt;
}

int main(){
    int a;
    cin >>a;
    print(a);
    return 0;
}



