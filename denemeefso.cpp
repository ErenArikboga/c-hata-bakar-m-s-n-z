#include<iostream>

using namespace std;

int main()  {
	int x;
	cout <<"hesap makinesi i�in 1 e \n normal toplama i�in 2 ye bas�n";
	cin >> x;
	
	if(x = 1)  {
		int a, c, sonuc;
		char b;
		cout <<"2 tane say� giriniz: "; 
		cin >> a >> b >> c;
		switch(b)  {
			
			case'+':
			sonuc = a + c;
			break;
			
			case'-':
			sonuc = a - c;
			break;
			
			case'*':
			sonuc = a * c;
			break;
			
			case'/':
			sonuc = a / c;
			break;
			
			default:
			cout<<"hata";
			break;
			
		}
	}
		else if(x = 2) {
			int d, e, sonuc1;
			cout<<"iki say� giriniz: ";
			cin >> d >> e;
			sonuc1 = d + e;
			cout<<sonuc1;
		} 
		else {
			cout<<"hata";
		}
		
		return 0;
			
		}

			
			
			
			
			
			
			
			
