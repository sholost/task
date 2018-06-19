#include <iostream>
#include <string>
using namespace std;

string removeDot(string a){         //fungsi untuk menghilangkan ',' pada input
    for(int i=0;i<a.size();i++){
        if(a[i]=='.'){
        a.erase(i,1);}
    }
    return a;
}

void gen(string a){                 
    a=removeDot(a);                     //memanggil  fungsi removeDot
    int h=a.size(),k;
    for(int i=h-1, c=0;i>=0;i--,c++){   //menampilkan output
        cout<<a[c]; k=i;
        while(k--){
            cout<<'0';
        }
        cout<<endl;
    }
}

int main() {
    string a;                           
    cin>>a;                            //input 
    gen(a);                            //memanggil fungsi void gen dengan parameter string input
    
	return 0;
}
