CodeChef submission 17885750 (C++14) plaintext list. Status: AC, problem SKYSCR, contest CODECHEF. By devika_sugathn (devika_sugathn), 2018-03-18 15:12:13.

    # include<bits/stdc++.h>
    using namespace std;
    int main() 
    {
    long long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       long long int a,b,c=0;
        cin>>a>>b;
        if(a>b)
        c=a-b;
        else
        c=b-a;
        cout<<c<<endl;
    }
    return 0;
    }  
