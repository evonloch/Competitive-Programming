/*
ID: evonloc1
LANG: C++11
PROB: ride
*/

#include <bits/stdc++.h>


using namespace std;

int main()
{
	freopen("ride.in","r",stdin);
	freopen("ride.out","w",stdout);


        string s1,s2;

        cin>>s1>>s2;


       long long int x=1,y=1;

        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]==' ') continue;
            x*=(s1[i]-'A'+1);
            x%=47;
        }

        for(int i=0;i<s2.size();i++)
        {
            if(s2[i]==' ') continue;
            //
            y=(y%47*((s2[i]-'A')+1))%47;
            //y%=47;
            //cout<<y<<endl;
        }
        //cout<<s1<<s2<<x<<endl<<y;
        if(x%47==y%47)
            cout<<"GO\n";
        else cout<<"STAY\n";







}
