#include<iostream>/*Kullan�c�dan 1'den b�y�k bir tam say� girmesini isteyin ve 1'den 
girilen tam say�ya kadar olan say�lar�n karelerinin toplam�n� hesaplayan kodu yaz�n�z.*/
using namespace std;
int main(){
	
	int a,tp=0,k;
	cout<<"1 den buyuk sayi giriniz:"<<endl;
	cin>>a;
	for(int i=1;i<=a;i++){
		k=i*i;
		tp+=k;
	}
	cout<<"kare toplami: "<<tp;
	
}
