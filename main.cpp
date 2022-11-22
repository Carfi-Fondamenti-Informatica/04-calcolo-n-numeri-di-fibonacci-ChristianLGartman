#include <iostream>
using namespace std;
int numeridiFibonacci(int n){
    int a=0, b=1, c=0;
    if(n>=2){
        cout<<b<<endl;
        for (int i=1; i<n; i++) {
         c=a+b;
         a=b;
         b=c;
         cout<<c<<endl;
        }
    }
    else{
        cout<<"errore";
    }
    return n;
}
int main() {
    int p;
    cout << "dimmi quanti numeri della Serie di Fibonacci vuoi che stampi:"<< endl;
    cin >> p;
    int h = numeridiFibonacci(p);
    return 0;
}
