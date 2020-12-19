#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    scanf("%d", &T);

    while(T--)
    {
        unsigned long long int out, evenA=0, oddA=0, evenB=0, oddB=0;
        scanf("llu %llu", &A, &B);
        if(A%2==0)
        {
            evenA=A/2;
            oddA=A/2;
        }
        else
        {
            evenA=(A/2);
            oddA=evenA+1;
        }

        if(B%2==0)
        {
            evenB=B/2;
            oddB=B/2;
        }
        else
        {
            evenB=(B/2);
            oddB=evenB+1;
        }
        out = (evenA*evenB)+(oddA*oddB);
        printf("%llu", out);
    }
    return 0;
}
