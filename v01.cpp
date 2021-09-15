

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//Struktura
struct studentas {
    string vardas, pavarde;
    float paz[7];
    float egz;
    float galutinis;
};
int main ()
{
    cout << "Iveskite studentu skaiciu: "<< endl;
    int n;
    cin >> n;
    float sum=0;
    studentas grupe[n];
    for (int i = 0; i< n;i++){
        cout << "Iveskite " << i+1<< "-o studento varda ir pavarde: " << endl;
        cin >> grupe[i].vardas>>grupe[i].pavarde;
        sum=0;
        for (int j = 0; j<7;j++){
            cout << "Iveskite "<<j+1<< " pazymio ivertinima: ";
            cin>> grupe[i].paz[j];
            if(grupe[i].paz[j] < 0 || grupe[i].paz[j]>10) {cout << "ERROR IVEDETE NETINKAMA SKAICIU" << endl; //Patikrina ivesta skaiciu
                                                           cout << "Iveskite "<<j+1<< " pazymio ivertinima: ";
                                                           cin >> grupe[i].paz[j];}
            sum+=grupe[i].paz[j];
        }
    cout <<"Iveskite "<< i+1<<" -0 studento egzamino pazymi: ";
    cin>>grupe[i].egz;
    if(grupe[i].egz < 0 || grupe[i].egz >10) {cout << "ERROR IVEDETE NETINKAMA SKAICIU" << endl;
                                              cout << "Iveskite "<<i+1<< " -o studento egzamino ivertinima: ";
                                              cin >> grupe[i].egz;}
    grupe[i].galutinis=0.4*sum/7+0.6*grupe[i].egz;
    }
    cout << setw(15) << "Vardas" << setw(15)<< "Pavarde"<< setw(15) << "Egzaminas" << setw(15) << "Galutinis" << endl;
    
    for(auto &kint: grupe){
        cout<<setw(15)<<kint.vardas<<setw(15) <<kint.pavarde << setw(10)<<kint.egz << setw(10)<< setprecision(2)<< kint.galutinis<< endl;
    }

}

