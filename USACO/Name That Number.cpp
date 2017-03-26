/*
ID: plshsn1
PROG: namenum
LANG: C++
*/



#include <bits/stdc++.h>

using namespace std;




map<long long ,vector<string> > mp;


int main()
{



    ifstream fin ("dict.txt");



    string s;

    while(fin>>s)
    {
        long long  x = 0;
        string temp;
        for(long long int i = 0; i<s.size(); i++)
        {
            long long t  = 9;
            if(s[i]<'D') t = 2;
            else if(s[i] < 'G') t = 3;
            else if(s[i] < 'J') t = 4;
            else if(s[i] < 'M') t = 5;
            else if(s[i] < 'P') t = 6;
            else if(s[i] < 'T') t = 7;
            else if(s[i] < 'W') t = 8;

            x *=10;
            x += t;

        }




        mp[x].push_back(s);

    }


    fin.close();




    freopen ("namenum.in","r",stdin);

    freopen ("namenum.out","w",stdout);


    string n;

    cin>>n;



    long long temp = 0;

    for(int i = 0;i<n.size();i++)
    {
        temp*=10;
        temp+=(n[i]-'0');
    }





    if(mp[temp].size() == 0)
        cout<<"NONE\n";
    else
    {
        for(long long int i = 0; i<mp[temp].size(); i++)
        {
            cout<<mp[temp][i]<<endl;
        }
    }

}
