#include <iostream>
#include <time.h>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main(){
srand (time(NULL));	
int kontrol = true;
while(kontrol){
	
	int satir, sutun;
	cout<<"Matrisin satir sayisini giriniz: ";
	cin>>satir;
	cout<<"Matrisin sutun sayisini giriniz: ";
	cin>>sutun;
	int matrisA[satir][sutun];
	int matrisB[satir][sutun];
	for(int i = 0; i<satir;i++){
		
		for(int j = 0; j< sutun; j++){
			
			cout<<"Matrisin "<<i+1<<".ci satir, "<<j+1<<".ci sutun degerini giriniz: ";
			int sayi;
			cin>>sayi;
			matrisA[i][j] = sayi;
			
		}
		
	}
	for(int i = 0; i< satir; i++){
		
		for(int j = 0; j< sutun; j++){
			
			cout<<matrisA[i][j]<<" ";}
			cout<<endl;}
	cout<<"-----------------------------------"<<endl;
	for(int i = 0; i<satir;i++){
		for(int j = 0; j<sutun;j++){
			
			matrisB[i][j]=rand()%10;
			
		}
	}
	for(int i = 0; i<satir;i++){
		for(int j = 0; j<sutun;j++){
			
			cout<<matrisB[i][j]<<" ";}
			cout<<endl;}
			
			cout<<"1-Matrisleri Topla\n2-Matrisleri Cikar\n3-Cik";
			int toplammatris[satir][sutun];
			int secim;
			cin>>secim;
			if(secim == 1){
				
				for(int i = 0; i<satir;i++){
		for(int j = 0; j<sutun;j++){
			toplammatris[i][j] = matrisA[i][j] + matrisB[i][j];}}
				
			}
			
			else if(secim == 2){
				
				for(int i = 0; i<satir;i++){
		for(int j = 0; j<sutun;j++){
			toplammatris[i][j] = matrisA[i][j] - matrisB[i][j];}}
				
			}
			else{
				kontrol = false;
			}
			for(int i = 0; i<satir;i++){
		for(int j = 0; j<sutun;j++){
			cout<<toplammatris[i][j]<<" ";}
			cout<<endl;}
				
				cout<<"------------------------"<<endl;
			
			
}
}
