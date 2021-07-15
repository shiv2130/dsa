#include <iostream>
using namespace std;
void func(int n){
    int t1=0;
    int t2=1;
    int next;
   for(int i=1; i<=n; i++){
       cout<<t1<<endl;
        next = t1+t2;
        t1=t2;
        t2=next;
   }
}
int main(){
    int n;
    cin>>n;
    func(n);
    return 0;
}