#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=-1;
        cin>>n;
        int arr[n];
        vector<int> v;
        for(int i=0; i<n; i++) cin>>arr[i];

        int range= pow(2,8);
        int x=0;
        for(int i=0;i<n;)
        {
            int Xor = x^arr[i];
            v.push_back(Xor);
            if(i==n-1)
            {
                int result = v[0];
                for(int j=1; j<v.size(); j++)
                {
                    result = result^v[j];
                }
                if(result==0)
                {
                    cout<<x<<endl;
                    cnt =1;
                    break;
                }
                else
                {
                    v.clear();
                    x++;
                    if(x==range){break;}
                    i=-1;
                }
            }
            i++;
        }
        if(cnt!=1) cout<<"-1"<<endl;
    }

}

