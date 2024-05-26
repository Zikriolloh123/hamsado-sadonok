#include<iostream>
using namespace std;
    ///10
    // 1+1/2+1/3+...1/10;
int main()
{
    char S, A='A',a='a',E='E',e='e',I='I',i='i',
    O='o',o='o',U='U',u='u',Y='Y',y=',y';
    cin>>S;
    if (S==A || S==a || S==E || S==e || S==I ||
         S==i || S==O || S==o || S==U || S==u || S==Y || S==y)
    {
        cout<<" Sadonok "<<endl;
    }
    else
    {
        cout<<" Hamsado "<<endl;
    }
    main();

}
