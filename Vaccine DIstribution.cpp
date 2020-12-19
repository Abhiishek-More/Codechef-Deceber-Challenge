#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie();

    int T;
    scanf("%d", &T);

    while(T--)
    {
        int out=0, N=0, D=0, fit=0, emerg=0;
        for(int i=0; i<N; i++)
        {
            int temp=0;
            scanf("%d", &temp);
            if(temp<=9 || temp>=80)
                emerg++;
            else
                fit++;
        }
        out=(fit/D)+(emerg/D);

        printf("%d", out);
    }
}

