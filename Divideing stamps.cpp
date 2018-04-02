
Home  » Dividing Stamps » All Submissions » devika_sugathn [17868904]
Solution: 17868904

CodeChef submission 17868904 (C++14) plaintext list. Status: AC, problem DIVIDING, contest CODECHEF. By devika_sugathn (devika_sugathn), 2018-03-17 18:29:29.

    # include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int g;
        cin>>g;
        int c[g];
        int s=0,b=0;
        for(int i=1;i<=g;i++)
        {
            cin>>c[i];
            s+=c[i];
            b+=i;
            
        }
        if(s==b)
        cout<<"YES";
        else
        cout<<"NO";
    }
     


