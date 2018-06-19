#include <iostream>
#include <cstring>
using namespace std;
// generating bilangan prima dapat dilakukan dengan dua cara, yaitu dengan membatasi pengecekan bilangan hingga akar bilangan tersebut,
// dan metode berikutnya (Sieve Erastothenes) yang membatase pencarian hingga akar bilangan dan langsung mengiliminasi kelipatan bilangan.
// Sieve Erastothenes merupakan metode yang lebih efektif.
void gen(int n)
{
    bool prim[n+1];                         //generating array boolean
    memset(prim, true, sizeof(prim));       //semua elemen array diset bernilai true
 
    for (int i=2; i*i<=n; i++)              //membatasi pemeriksaan dari 2 hingga akar bilangan input
    {
        if (prim[i] == true)
        {
            for (int a=i*2; a<=n; a += i)   //meng-set kelipatan bilangan (yang mana bukan merupakan bil prima) menjadi bernilai FALSE
                prim[a] = false;
        }
    }
    for (int i=2; i<=n; i++)                //menampilkan nilai saat elemen array bernilai true
       if (prim[i])
          cout << i << " ";
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%s %d %s\n", "Bilangan prima hingga angka", n, "adalah :");
    gen(n);
    return 0;
}
