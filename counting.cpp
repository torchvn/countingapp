#include <iostream>

using namespace std;

bool isMod(int mod, int m, int n, int k)
{
    if((mod % m == 0) && (mod % n == 0) && (mod % k != 0))
    {
        return true;
    }
    else{
        return false;
    }
}

int demso(int n, int p, int q, int r)
{
    int dem = 0;
    for(int i = 1; i <= n;i++)
    {
        if(isMod(i,p,q,r) || isMod(i,r,q,p) || isMod(i,p,r,q))
        {
            dem = dem + 1;
        }
    }
    return dem;
}

int main()
{
    int n,p,q,r;
    cout << "Nhap cac so n, p, q, r (<=109): " << endl;
    cin>>n>>p>>q>>r;
    cout<<"So cac so la : "<<demso(n,p,q,r)<<endl;
    return 0;
}
