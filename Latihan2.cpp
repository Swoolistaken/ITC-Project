#include <iostream>
using namespace std;
void rapot(int &tinggi);
int jmlh=0;
int count=0;
int nilai[10];

int main(){

cout<<"Input Banyak Mahasiswa:";cin>>jmlh;
int tertinggi=0;
rapot(tertinggi);
cout<<"Nilai Tertinggi:"<<tertinggi<<endl;
cout<<"Banyak Nilai Tertinggi:"<<count;
}
void rapot(int &tinggi){
    
    for (int i=0;i<jmlh;i++){
        cout<<"Nilai Siswa Ke-"<<i+1<<":";
        cin>>nilai[i];
        if(nilai[i]>tinggi){
            tinggi=nilai[i];
            count=1;
        }
        else if(nilai [i]==tinggi){
            count++;
        }
    }

}