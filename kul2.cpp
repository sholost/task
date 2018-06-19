#include <iostream>
using namespace std;
void gen(int n){
    int p=0, q=1, r;                //inisialisasi p dan q sebagai dua suku awal setiap barisan fibonaci, dan r merupakan suku selanjutnya (hasil penjumlahan p dan q)
    for(int i=0; i<n;i++){
        if(i==0){                   //untuk suku pertama langsung dimulai dari 0
            printf("%d ",0);
        }
        else if(i==1){
            printf("%d ", 1);       //begitu juga dengan suku kedua langsung diinisiasikan dengan 1
        }
        else{                       //untuk suku selanjutnya (r) merupakan penjumlahan dari dua suku sebelumnya (p dan q)
            r=p+q;                  //hingga sebanyak n kali
            p=q;                
            q=r;
        printf("%d ",q);
        }
    }
}

int main() {
    int n;
	scanf("%d", &n);
	gen(n);
	return 0;
}
