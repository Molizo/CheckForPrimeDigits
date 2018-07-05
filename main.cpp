#include <iostream>

using namespace std;

int main()
{int n,uc,d,prim;
    cout<<"Introduceti numarul:";
    cin>>n;
    prim=1;
    while(n>0)
    {
        uc=n%10;
        d=2;
        while(d<=uc/2)
        {
            if(uc%d==0)
            {
                prim=0;
                break;
            }
            d++;
        }
        if(prim==0)
        {
            break;
        }
        n=n/10;
    }
    cout<<endl<<endl<<endl;
    if(prim==1)
    {
        cout<<"Numarul are cifre prime."<<endl<<endl<<endl;
    }
    else
    {
        cout<<"Numarul nu are cifre prime."<<endl<<endl<<endl;
    }
    return 0;
}
