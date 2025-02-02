#include <iostream>
using namespace std;
int b=1;
void UAS(int a, int *c);
int main(){
    int a,c;
    a=3;b=1;c=2;
    cout<<a<<" "<<b<<" "<<c<<endl;
    UAS(a,&c);
    cout<<a<<" "<<b<<" "<<c<<endl;
    a=2;b=4;c=3;
    cout<<a<<" "<<b<<" "<<c<<endl;
    UAS(c,&b);
    cout<<a<<" "<<b<<" "<<c<<endl;
}

void UAS(int a, int *c){
    a=b+a;cout<<a<<endl;
    b=5-*c;cout<<b<<endl;
    *c=10+a;cout<<*c<<endl;
    
    
}