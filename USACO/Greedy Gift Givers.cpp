/*
ID: evonloc1
LANG: C++11
PROB: gift1
*/

#include <bits/stdc++.h>


using namespace std;

int main()
{
	freopen("gift1.in","r",stdin);
	freopen("gift1.out","w",stdout);

	string s1,s2;

	int np, giv , n,x = 0;

	map<string,int> mp;

	vector <string> st;


	cin>>np;



	for(int i=0;i<np;i++)
    {
        cin>>s1;

        mp[s1]=x++;
        st.push_back(s1);
    }

    int ara[11]={0};

   for(int i=0;i<np;i++)
    {
        cin>>s1>>giv>>n;

            int x = mp[s1] , y=0;

            if(n==0) y=0;

          else  y = giv%n;

            //cout<<1<<endl;

    ara [x] =  ara[x]   - giv ;// ( giv % n )  ;

    ara [x] = ara[x] + y;

        for(int j=0;j<n;j++)
        {
            cin>>s2;
            int y = mp[s2];
          ara [y] = ara[y] + (giv/n);

            //cout<<mp[s2]<<endl;

        }
    }


    typedef map<string,int>::iterator it;

    for(   int k = 0; k != st.size() ; k++)
    {
        s2 = st[k] ;

        n = ara[mp[s2]] ;

        cout<<s2<<' '<< n << endl;
    }



}
