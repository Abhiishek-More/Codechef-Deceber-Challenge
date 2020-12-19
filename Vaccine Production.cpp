#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	int D1, V1, D2, V2, P, total=0, totalVaccine=0, i=0, out;
	scanf("%d %d %d %d %d", &D1, &V1, &D2, &V2, &P);
	//cin>>D1>>V1>>D2>>V2>>P;

	if(D1==D2 && D1==1)
    {
       totalVaccine=V1+V2;
       while(total<P)
       {
           total += totalVaccine;
           i++;
       }
       out=++i;
       /*if(D1==1)
       {
           out=++i;
       }
       else
       {
            out=++i + D1;
       }*/
    }
    else
    {
        while(total<P)
        {
            if(i>=D1)
            {
                total+=V1;
            }

            if(i>=D2)
            {
                total+=V2;
            }
            i++;
        }
        out=i;
    }
    printf("%d\n", (--out));
    //cout<<--i;
}
