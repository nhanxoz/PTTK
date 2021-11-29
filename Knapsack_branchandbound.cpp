#include <stdio.h>
void Try(int i){
    int j, Tong, g;
    for (j = 2; j<=n;j++)
        if(!Daxet[j])
        {
            x[i] = j;
            Daxet[j] = 1;
            S = S + C[x[i-1]][x[i]];
            if (i == n){
                Tong = S + C[x[n]][x[1]];
                if (Tong < Gttu){
                    Gan(Httu, x, n);
                    Gttu = Tong;
                }
            }
            else{
                g = S + (n-i+1);
                if(g < Gttu)
                Try(i+1);
            }
            S = S - C[x[i-1]][x[i]];
            Daxet[i] = 0;
        }
}