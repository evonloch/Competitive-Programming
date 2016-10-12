#include <bits/stdc++.h>


using namespace std;

int main()

{

    int n , k ,minn ,maxx;

    vector <string> vs;string s;

    cin>>n>>k;

    for(int i=0;i<n; i++)
    {
        cin>>s;

        vs.push_back(s);
    }



    cin>>s;

    int len=s.size();

    int kom=0, beshi=0 , shoman=0;

    for(int i=0;i< n;i++)
    {
        if(vs[i].size()>len) beshi++;

        else if( vs[i].size()<len) kom++;

        else shoman ++;
    }

    if(kom==0) minn=1;

    else minn=kom+1;


    int mot=kom+shoman;

    maxx = ((mot-1)/k)*5+mot;

    cout<<minn<<" "<<maxx<<endl;

    //return main();






}
