#include <bits/stdc++.h>

using namespace std;

int main()
{

    int ans = 0;

    int n;

    string s;

    cin>>n;

    while(n--)
    {
        cin>>s;

        if(s=="Tetrahedron")
            ans+=4;
        else if(s=="Cube") ans+=6;

        else if(s=="Octahedron")ans+=8;

        else if(s=="Dodecahedron") ans+=12;

        else ans+=20;
    }

    cout<<ans<<endl;

}
