#include <iostream>
using namespace std;

int main()
{  
    int a, b, c;
    
    cin>> a;
    cin>>b;
    cin>>c;
    if (b>=a && c>=a) {
        cout<<a<<endl;
    }
    else if (a >= b && c >= b) {
        cout<<b<<endl;
    }
    else {
        cout<<c<<endl;
    }
    
    return 0;
}
