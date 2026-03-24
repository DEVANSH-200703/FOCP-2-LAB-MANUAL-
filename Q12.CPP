#include<iostream>
using namespace std;
int main(){
      int a,b,c;
      cout<<"ENTER SIDES OF THE TRIANGLE : ";
      cin>>a>>b>>c;
    if(a==b&&b==c&&c==a){
    cout<<" EQUILATERAL TRIANGLE ";
}
    else if(a==b||b==c||c==a){
cout<<" ISOCELESE TRIANGLE ";
}
      else{
    cout<<" SCALENE TRIANGLE ";
    }
}
