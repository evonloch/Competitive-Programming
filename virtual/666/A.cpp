#include <bits/stdc++.h>

using namespace std;

set <string> result;

#define mp make_pair

map<pair<string,int>,bool > visit;

string s;

void solve(int pos, string pre)
{
    if(visit[mp(pre,pos)]) return;
    if(pos<=4) return ;

    visit[mp(pre,pos)] = true;

    //cout<<pos<<' '<<pre<<endl;
    int  i , j;

    string temp = "";

    for (  i=0; i<2  ; i++)
    {
        /* code */
        temp = s[pos-i] + temp;
    }
    //cout<<temp<<endl;
    int temppos = pos-i;
    if(temppos>=4)
    {
        result.insert(temp);

        solve(temppos,temp);

    }


    temp = "";

    for (  i=0; i<3  ; i++)
    {
        /* code */
        temp = s[pos-i]+ temp;
    }

    //cout<<temp<<endl;


    temppos = pos-i;
    if(temppos>=4 )
    {
        result.insert(temp);

        solve(temppos,temp);

    }

}

int main(int argc, char const *argv[])
{
    /* code */


    std::cin >> s;

    int pos = s.size() - 1 , i , j;

    string temp = "";

    for (  i=0; i<2  ; i++)
    {
        /* code */
        temp = s[pos-i] + temp;
    }
    int temppos = pos-i;
    //cout<<temp<<' '<<temppos<<endl;
    if(temppos>=4)
    {
        result.insert(temp);

        solve(temppos,temp);

    }


    temp = "";

    for (  i=0; i<3  ; i++)
    {
        /* code */
        temp = s[pos-i]+ temp;
    }


    temppos = pos-i;
    if(temppos>=4 )
    {
        result.insert(temp);

        solve(temppos,temp);

    }
    //cout<<temp<<' '<<temppos<<endl;

    std::cout << result.size() << '\n';

    for (auto it = result.begin(); it != result.end() ; it++)
    {
        /* code */
        std::cout << *it << '\n';
    }

    return 0;
}
