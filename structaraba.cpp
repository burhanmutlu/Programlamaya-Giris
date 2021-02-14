#include<iostream>
using namespace std;

struct araba{
	int tekerleksayisi;
	float motor;
	int beygir;
	int model;
}audi,honda;

int main(){
	
	audi={4,3.56,300,2015};
	honda=audi;
	cout<<honda.tekerleksayisi<<" "<<honda.motor<<" "<<honda.beygir<<" "<<honda.model;

}
