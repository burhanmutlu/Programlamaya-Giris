#include<iostream>
using namespace std;
int main(){
	
	int tp=0,i=0;
	char a[40];
	cout<<"metin giriniz:"<<endl;
	cin>>a;//burhan//5 indeks //6 hane
	while(a[i]!='\0'){
			tp++;
			i++;
		}
	for(i=0;i<tp;i++){//karakter say�s� kadar dondu
		cout<<a[tp-1-i];//karakter say�s� -1 indeks say�s�d�r
	}
}
