#include<iostream>
#include<iomanip> 
using namespace std;
int i=0;
double loan,rate,amount,interest,total,payment,NewBalance;
int main(){	
	cout << "Enter initial loan: ";
	cin>>loan;
	cout << "Enter interest rate per year (%): ";
	cin>>rate;
	cout << "Enter amount you can pay per year: ";
	cin>>payment;
	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	for(int year=1;NewBalance==0.00;loan=(total-payment),year++){
		
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; //ปี
	cout << setw(13) << left << loan; //ยอดเหลือจ่าย
	interest=(loan*(rate/100));	
	cout << setw(13) << left << interest;//ดอก
	total = loan+interest;
	cout << setw(13) << left << total;//ต้น+ดอก
	if(total<payment){
	cout << setw(13) << left << total;
	NewBalance=0.00;	
	cout << setw(13) << left << NewBalance;
	break ;
	}
	cout << setw(13) << left << payment;
	cout << setw(13) << left << total-payment;
	
	cout << "\n";	
	}
	
	return 0;
}
