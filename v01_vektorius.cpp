#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

struct studentas {
    string vardas, pavarde;
    vector<int> paz = {0};
    int egz;
    float tarpinis;
    float galutinisvid;
    float galutinismed;

};
int main ()
{
    cout << "Iveskite studentu skaiciu: "<< endl;
    int n, p, sk;
    cin >> n;
    float sum = 0;
    studentas grupe[n];
    for (int i = 0; i < n;i++){
        cout << "Iveskite " << i + 1<< "-o studento varda ir pavarde: " << endl;
        cin >> grupe[i].vardas>>grupe[i].pavarde;
      
        cout << "Iveskite studento pazymius (kai baigsite, iveskite -1 (minus vienas)):";
        int counter = 0;
        do {
        cin >> sk;
        grupe[i].paz.push_back(sk);
          if (grupe[i].paz.at(counter) != -1) { grupe[i].tarpinis = grupe[i].tarpinis + (float)grupe[i].paz.at(counter); }
        counter++;
        }
          while (grupe[i].paz.at(counter) != -1);
          counter--;

        grupe[i].tarpinis = grupe[i].tarpinis / counter;
        cout << grupe[i].tarpinis << endl;
    }
    for (int i = 0; i < n; i++){
        cout <<"Iveskite "<< i + 1<<" -o studento egzamino pazymi: ";
        cin >> grupe[i].egz;
          if(grupe[i].egz < 0 || grupe[i].egz >10) {cout << "ERROR IVEDETE NETINKAMA SKAICIU" << endl;
                                                    cout << "Iveskite "<< i + 1<< " -o studento egzamino ivertinima: ";
                                                    cin >> grupe[i].egz;}

        grupe[i].galutinisvid = grupe[i].tarpinis*0.4+grupe[i].egz*0.6;
    
    }
    
    
    cout << setw(15) << "Vardas" << setw(15)<< "Pavarde"<< setw(15) << "Egzaminas" << setw(15) << "Galutinis/vid" <<  endl;
    for(auto &kint: grupe){
      
        cout<<setw(15)<<kint.vardas<<setw(15) <<kint.pavarde << setw(10)<<kint.egz << setw(10)<< setprecision(2)<< kint.galutinisvid << setw(10)<<  endl;
     
    }
return 0;
}