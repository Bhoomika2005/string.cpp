#include <iostream>

using namespace std;

int main()
{
   
    int  i,a,b,c,d;
    cin>>i;
    if(i>=1&&i<=1000){
        for(int j=1;j<=i;j++){
    cin>>a>>b;
    cin>>c>>d;
    
    if(a<b&&b<d&&a<c&&c<d)
    cout<<"YES"<<endl;
    else if(c<a&&a<b&&c<d&&d<b)
    cout<<"YES"<<endl;
    else if(d<c&&c<a&&d<b&&b<a)
    cout<<"YES"<<endl;
    else if(b<d&&d<c&&b<a&&a<c)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
        }
    }

    return 0;
}

