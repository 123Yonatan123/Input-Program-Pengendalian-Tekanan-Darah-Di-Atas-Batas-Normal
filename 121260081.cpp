//Annisa Nur Rahma - 121260068
//Rency Violita Vanden Bokshow - 121260076
//Yonatan Adi Nugroho Sigalingging - 121260081

#include<iostream> 
#include <stdlib.h> 

using namespace std; 

int main(){
	
	int DP, SP; 
	char ulangi; 
	
	
	do{ 
	
		cout<<"============================================\n"; 
		cout<<"      HITUNG TEKANAN DARAH UNTUK DEWASA     \n";
		cout<<"============================================\n";
		cout<<"        Annisa Nur Rahma - 121260068        \n";
		cout<<"  Rency Violita Vanden Bokshow - 121260076  \n";
		cout<<"Yonatan Adi Nugroho Sigalingging - 121260081\n";
		cout<<"              by Kelompok 3                 \n";
		cout<<"============================================\n\n"; 
		
		cout<<"Masukkan DP : ";
		cin>>DP; 						
		cout<<"Masukkan SP : ";
		cin>>SP;
		cout<<"\n";
	

		double MAP= ((2*DP)+SP)/3; 
	
		if(MAP<70){ 							
			cout<<"darah anda terlalu rendah";	
		}
		else if(MAP>=70 && MAP<=93.3){			
			cout<<"darah anda normal";			
		}
		else {									
			cout<<"darah anda terlalu tinggi"; 	
		}
		
		cout<<"\n\nApakah kamu mau mengulang?\n"; 
        cout<<"Jawab (y/n): ";						
        cin >> ulangi;	
        
        system("CLS");
        
	}
	while(ulangi == 'y' || ulangi == 'Y');{
        
	}
}
