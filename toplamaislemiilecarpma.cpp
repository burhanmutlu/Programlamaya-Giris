#include<iostream>//toplama i�lemi ile �arpma
#include<cmath>
using namespace std;
int main(){
	
	int a,b,tp;
	
	cout<<"iki sayi giriniz:";
		cin>>a>>b;
		
	if(a<0&&b>0){
			b=-1*b;
	}
			else if(a<0&&b<0){
				b=abs(b);
		}
				for(int i=0;i<abs(a);i++){
					tp+=b;
			}
					cout<<"toplam: "<<tp;
}
