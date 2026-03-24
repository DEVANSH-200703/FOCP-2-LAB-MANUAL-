#include<iostream>
#include<iomanip>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
         f*=i;
    }
      return f;
}
int main(){
    int n;
    cout<<"ENTER VALUE OF n : ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i-1;j++){
               cout<< "  ";
        }
        for(int j=0;j<=i;j++){
            int a=fact(i);
            int b=fact(j);
            int c=fact(i-j);
           cout<<setw(4)<<a/(b*c);
    }
    cout<<endl;
    }
}
