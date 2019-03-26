#include <iostream>
#include "test.h"
using namespace std;
int main(){
    Time a(10,30);
    Time b(3,34);
    a.show();
    cout<<endl;
    b.show();
    cout<<endl;
    Time c = a + b;
    c.show();
    cout<<endl;
    return 1;
}
