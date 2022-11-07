#include<iostream>
#include <stdio.h>
#include <vector>
using namespace std;

class rational
{
    int n,d;
public:
    rational() : n(1), d(1) {};
    ~rational(){};
    void setn(int nn){ n = nn;}
    void setd(int dn) { d = dn; }
    void getData()
    {
        cin>>n;
        cin>>d;

        while(d==0)
        {
            break;
        }

        while(d<0)
        {
            n *= -1;
            d *= -1;
        }
    }

int GCD(int n1, int remainder)
{
    if(remainder==0)
        return(n1);
    else { return(GCD(remainder,n1%remainder)); }
}
void printoper()
{
    cout << n << " " << d << endl;
}
void reduce(int &n,int &d)
{
    int rdc = 0;
    if(d>n)
        rdc = GCD(d,n);
    else if(d<n)
        rdc = GCD(n,d);
    else
        rdc = GCD(n,d);
    n /= rdc;
    d /= rdc;
    cout<<n<<"/"<<d<<endl;
}

void operator +(rational c1)
{
rational temp;
temp.n=(n*c1.d)+(c1.n*d);
temp.d=c1.d*d;
reduce(temp.n,temp.d);
}

void operator -(rational c1)
{
rational temp;
temp.n=(n*c1.d)-(c1.n*c1.d);
temp.d=c1.d*d;
reduce(temp.n,temp.d);
}

void operator *(rational c1)
{
rational temp;
temp.n=n*c1.n;
temp.d=d*c1.d;
reduce(temp.n,temp.d);
}

void operator /(rational c1)
{
rational temp;
temp.n=n*c1.d;
temp.d=d*c1.n;
if(temp.d<0)
{
    temp.n *= -1;
    temp.d *= -1;
}
reduce(temp.n,temp.d);
}

};

int main()
{
    vector<rational> list;
            int n;
            int d;
            rational *p1;
    int x;
    char cr;
    cin>>x;
    for(int contador=0; contador<x; contador++){
            if(contador<x){
                    cin>>n;
                    cin>>d;
                    cin>>cr;
                    p1=new rational;
                    list.push_back(*p1);
                    cin.get();
                    }
            }
    vector<rational>::iterator it;
    for ( it = list.begin(); it != list.end(); ++it ) {
                        it->printoper();
                 }
cin.get();
return 0;
}