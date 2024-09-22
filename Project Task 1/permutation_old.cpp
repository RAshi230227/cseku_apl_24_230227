#include <iostream>
using namespace std;
int main()
{  int t;
    cin>>t;
    while (t--)
    {  int n,k;
        cin>>n>>k;
        if (k!=0 && ((n-k)!=1))
        { cout<<1<<" ";
            for (int i=(n-k+1); i<=n; i++)
            {  cout<<i<<" ";  }
            for (int i=(n-k); i>=2; i--)
            {  cout<<i<<" "; }
 
            cout<<endl;
        }
        else if ((n-k)==1)
        {  for (int i=1;i<=n;i++)
            {
                cout<<i<<" ";
            }
        }
 
        else
        {
            while (n>0)
            {  cout<<n<<" ";
   n--;
            }
        }
        cout<<endl;
    }
}
