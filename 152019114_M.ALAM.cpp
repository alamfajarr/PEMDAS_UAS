#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main (){
	int i;
	int x1;
	int x2;
	int x3;
	int y1;
	int y2;
	int y3;
	int jumx;
	int jumy;
	float sigmaxy;
	float sigmaxkuad;
	float sigmaykuad;
	float kuadxhasil;
	float kuadyhasil;
	float akarx;
	float akary;
	float r;
	
	cout << "X1:";
	cin>> x1;
	cout<< "Y1:";
	cin>> y1;
	cout<<endl;
	if(x1>=0 && y1>=0){
		cout << "X2:";
		cin>> x2;
		cout<< "Y2:";
		cin>> y2;
		cout<<endl;
		
		if(x2>=0 && x2>=0){
			cout << "X3:";
			cin>> x3;
			cout<< "Y3:";
			cin>> y3;
			cout<<endl;
			
			if(x3>=0 && y3>=0){
				jumx = x1+x2+x3;
				jumy = y1+y2+y3;
				
				sigmaxy=(x1*y1)+(x2*y2)+(x3*y3);
				kuadxhasil=pow(x1,2)+pow(x2,2)+pow(x3,2);
				kuadyhasil=pow(y1,2)+pow(y2,2)+pow(y3,2);
				sigmaxkuad=pow(jumx,2);
				sigmaykuad=pow(jumy,2);
				r=sigmaxy-(jumx*jumy)/ sqrt(kuadxhasil)-sigmaxkuad * sqrt(kuadyhasil)-sigmaykuad;
				
				cout<<"Hasil r="<<r<<endl;
				
				if(r>0){
					cout<<"Hubungan antara variabel X dan Y adalah positif, dimana jika nilai X bertambah, maka nilai Y pun akan bertambah, dan juga sebaliknya";
				}
				else if(r<0){
					cout<<"Hubungan antara variabel X dan Y adalah negatif, dimana jika nilai X bertambah, maka nilai Y akan mengecil, dan juga sebaliknya";
				}
				else{
					cout<<"Tidak ada hubungan antara variable X dan Y";
				}
				
				
			}
			else{
				cout<<"data tidak boleh kurang dari 0, data harus sama dengan 0 atau lebih";
			}
			
			
		}
		else{
			cout<<"data tidak boleh kurang dari 0, data harus sama dengan 0 atau lebih";
		}
	
		
	}
	else{
		cout<<"data tidak boleh kurang dari 0, data harus sama dengan 0 atau lebih";
	}
	
	
}