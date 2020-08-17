#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
using namespace std;
//Run : G:\cpp\th_br_18.exe<G:\cpp\project\th_br_18.txt
void delay(int s){
	clock_t goal = s + clock();
	while(goal>clock());
}
int main(){
	string a[358];
	for(int i=0; i<358; i++){
		getline(cin,a[i]);
	}
	delay(750);
	system("cls");
	delay(750);
	system("color 0F");
	for(int i=0; i<7; i++){
		cout<<a[i]<<endl;
	}
	delay(750);
	system("cls");
	for(int i=8; i<14; i++){
		cout<<a[i]<<endl;
	}
	delay(750);
	for(int i=14; i<25; i++){
		cout<<a[i]<<endl;
	}
	delay(750);
	for(int i=25; i<30; i++){
		cout<<a[i]<<endl;
	}
	for(int i=0; i<19; i++){
		cout<<a[30][i];
	}
	for(int i=19; i<28; i+=3){
		delay(500);
		cout<<a[30][i]<<a[30][i+1]<<a[30][i+2];
	}
	cout<<endl;
	delay(500);
	system("cls");
	system("color 09");
	for(int i=32; i<56; i++){
		cout<<a[i]<<endl;
	}
	delay(1000);
	system("cls");
	system("color 05");
	for(int i=56; i<80; i++){
		cout<<a[i]<<endl;
	}
	delay(1000);
	system("cls");
	system("color 04");
	for(int i=80; i<104; i++){
		cout<<a[i]<<endl;
	}
	delay(1000);
	system("cls");
	system("color 02");
	for(int i=104; i<128; i++){
		cout<<a[i]<<endl;
	}
	delay(1000);
	system("cls");
	system("color 01");
	for(int i=128; i<152; i++){
		cout<<a[i]<<endl;
	}
	delay(1000);
	system("cls");
	system("color 0B");
	for(int i=152; i<176; i++){
		cout<<a[i]<<endl;
	}
	delay(1000);
	system("cls");
	system("color 0A");
	for(int i=176; i<200; i++){
		cout<<a[i]<<endl;
	}
	delay(1000);
	system("cls");
	system("color 0C");
	for(int i=200; i<224; i++){
		cout<<a[i]<<endl;
	}
	delay(1000);
	system("cls");
	system("color 0D");
	for(int i=224; i<248; i++){
		cout<<a[i]<<endl;
	}
	delay(1000);
	system("cls");
	system("color 0F");
	for(int i=248; i<272; i++){
		cout<<a[i]<<endl;
	}
	delay(1000);
	system("color 0E");
	system("cls");
	string b="";
	for(int i=0; i<3; i++){
		for(int j=0; j<7; j++){
			cout<<""<<endl<<""<<endl;
			for(int k=0; k<24; k++){
				if(j==0 && (k==11 || k==12)){
					cout<<a[332]<<endl;
					continue;
				}
				if(j==1 && (k==10 || k==13 || k==12 || k==11)){
					if(k==11 || k==12){
						cout<<a[331]<<endl;
						continue;
					}
					cout<<a[330]<<endl;
					continue;
				}
				if(j==2 && (k==8 || k==14 || k==12 || k==11)){
					if(k==11 || k==12)cout<<a[329]<<endl;
					if(k==8){cout<<a[328]<<endl<<a[329]<<endl;k++;}
					if(k==14){cout<<a[329]<<endl<<a[328]<<endl;k++;}
					continue;
				}
				if(j==3 && (k==6 || k==16 || k==12 || k==11)){
					if(k==11 || k==12)cout<<a[327]<<endl;
					if(k==6){cout<<a[326]<<endl<<a[327]<<endl;k++;}
					if(k==16){cout<<a[327]<<endl<<a[326]<<endl;k++;}
					continue;
				}
				if(j==4 && (k==4 || k==18 || k==12 || k==11)){
					if(k==11 || k==12)cout<<a[325]<<endl;
					if(k==4){cout<<a[324]<<endl<<a[325]<<endl;k++;}
					if(k==18){cout<<a[325]<<endl<<a[324]<<endl;k++;}
					continue;
				}
				if(j==5 && (k==2 || k==20 || k==12 || k==11)){
					if(k==11 || k==12)cout<<a[323]<<endl;
					if(k==2){cout<<a[322]<<endl<<a[323]<<endl;k++;}
					if(k==20){cout<<a[323]<<endl<<a[322]<<endl;k++;}
					continue;
				}
				if(j==6 && (k==0 || k==22 || k==12 || k==11)){
					if(k==11 || k==12)cout<<a[321]<<endl;
					if(k==0){cout<<a[320]<<endl<<a[321]<<endl;k++;}
					if(k==22){cout<<a[321]<<endl<<a[320]<<endl;k++;}
					continue;
				}
				cout<<b<<endl;
			}
			delay(125);
			system("cls");
		}
	}
	delay(750);
	system("cls");
	for(int i=272; i<278; i++){
		cout<<a[i]<<endl;
	}
	delay(750);
	for(int i=278; i<289; i++){
		cout<<a[i]<<endl;
	}
	delay(750);
	for(int i=289; i<294; i++){
		cout<<a[i]<<endl;
	}
	for(int i=0; i<28; i++){
		cout<<a[294][i];
	}
	for(int i=28; i<37; i+=3){
		delay(500);
		cout<<a[294][i]<<a[294][i+1]<<a[294][i+2];
	}
	delay(500);
	system("cls");
	delay(500);
	for(int i=334; i<339; i++){
		cout<<a[i]<<endl;
	}
	for(int i=0; i<30; i++){
		cout<<a[339][i];
	}
	for(int i=30; i<39; i+=3){
		delay(500);
		cout<<a[339][i]<<a[339][i+1]<<a[339][i+2];
	}
	cout<<endl;
	delay(500);
	for(int i=340; i<352; i++){
		cout<<a[i]<<endl;
	}
	delay(750);
	for(int i=352; i<358; i++){
		cout<<a[i]<<endl;
	}
	delay(1500);
	system("cls");
	cout<<a[296]<<endl<<a[297]<<endl;
	for(int i=298; i<318; i++){
		for(int j=0; j<47; j++){
			delay(5);
			cout<<a[i][j];
		}
		cout<<endl;
	}
	delay(750);
	system("cls");
}
