#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n , m;;

    //vector< pair<long long ,long long > > vchees , vcode;

    cin>>n;

    long long maxxch =-1 , maxxcode = -1 , minych = 100000000000, minycode = 100000000000;

    for( long long i = 0;i<n;i++)
    {
        long long x , y;

        cin>>x>>y;

        maxxch = max(maxxch,x);

        minych = min(minych,y);


    }

    cin>>n;

    for( long long i = 0;i<n;i++)
    {
        long long x , y;

        cin>>x>>y;

        maxxcode = max(maxxcode,x);
        minycode = min(minycode,y);
    }

    long long ans ;

    if(minych>=maxxcode && minycode>= maxxch) ans = 0;

    else ans = max((maxxcode-minych),(maxxch-minycode));

    cout<<ans<<endl;


}
