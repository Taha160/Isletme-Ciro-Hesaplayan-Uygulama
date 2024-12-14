#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));
    int cirolar[12];       
    int yil;               
    int toplam_ciro = 0;   
    int ort_ciro = 0;      
    float ceyrekc_ort = 0; 
    int toplamc_ciro = 0;  
    int ay_ceyrek;
	char durum;         

do{
    cout << "Hangi yilin ciro degerlerini gormek istediginizi tuslayiniz: ";
    cin >> yil;
if(yil <= 5){
    for (int i = 0; i < 12; i++) {
        cirolar[i] = rand() % (5000 - 100 + 1) + 100;
        toplam_ciro += cirolar[i];
    }

    
    ort_ciro = toplam_ciro / 12;

   
    cout << yil << ". Yilin Ortalama Ciro degeri: " << ort_ciro << endl;

    
    cout << yil << ". Yilin Ortalama Cirodan Yuksek Olan Aylarin Degerleri:" << endl;
    for (int i = 0; i < 12; i++) {
        if (cirolar[i] > ort_ciro) {
            cout << i + 1 << ". Ayin Ciro Degeri: " << cirolar[i] << endl;
        }
    }

    
    cout << "Sectiginiz Yilin Hangi Ceyreginin Ortalama Ciro Hesabini Ogrenmek Istersiniz (1-4 Arasi): ";
    cin >> ay_ceyrek;

    
    if (ay_ceyrek >= 1 && ay_ceyrek <= 4) {
        int baslangic = (ay_ceyrek - 1) * 3; 
        int bitis = baslangic +3;

        toplamc_ciro = 0; 
        for (int i = baslangic; i < bitis; i++) {
            toplamc_ciro += cirolar[i];
        }
        ceyrekc_ort = (float)toplamc_ciro / 3; 
        cout << yil << ". Yilin " << ay_ceyrek << ". Ceyreginin Ortalama Degeri: " << ceyrekc_ort << endl;
        cout << "Isleminize Devam Etmek Ýstiyor Musunuz= (E/H) : " ;
        cin >> durum;
    } 
	else {
        cout << "Gecersiz bir ceyrek numarasi girdiniz!" << endl;
    }
}
else{
	cout << "Maalesef Son 5 Yil Harici Elimizde Veri Bulunmamaktadir ! " << endl;
	cout << "Isleminize Devam Etmek Ýstiyor Musunuz= (E/H) : " ;
	cin >> durum;
}}while(durum == 'E');
	


   return 0;
}
