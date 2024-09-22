#include <iostream>
using namespace std;
int main(){
int t;
cin>>t;
while (t--){
    int n;
    cin>>n;
    string str1,str2;
    cin >>str1 >>str2;
    int cnt=0;
    for (int i=0;i<n;i++)
    {
 
 
    if((str1[i]=='G' && str2[i]=='B') || (str1[i]==str2[i]) || (str1[i]=='B' && str2[i]=='G'))
    {
        cnt++;
    }
    }
    if (cnt==n)
    {
        cout<< "YES" <<endl;
    }
    else {
        cout<< "NO" << endl;
    }
}
return 0;
}
