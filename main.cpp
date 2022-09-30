#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>

using namespace std;

struct hewan {
    string nama_hewan[50], biak[50], nafas[50], karni[50], susu[50], suara[50], sirip[50], tahan[50];
    char jenis_kelamin[50], kaki[50];
};

int main(){
    hewan DataHewan;
    int n;
    cout << "====================================================================" << endl;
    cout << "|                         Form Input hewan                         |" << endl;
    cout << "====================================================================" << endl;
    cout << "Masukan jumlah hewan yang ingin di input: "; cin >> n;
    cout << endl;

    for(int i = 0; i<n; i++){
        cout << endl;
        cout << "hewan ke-" << i+1 << endl;
        cout << "Nama hewan           : "; cin >> DataHewan.nama_hewan[i];

        if (DataHewan.nama_hewan[i] == "kucing", "anjing", "babi", "burung", "monyet"){
            cout << "Jenis Kelamin        : "; cin >> DataHewan.jenis_kelamin[i];
            cout << "Cara berkembangbiak  : "; cin >> DataHewan.biak[i];
            cout << "Alat pernafasan      : "; cin >> DataHewan.nafas[i];
            cout << "Apakah karnivora?    :  "; cin >> DataHewan.karni[i];
            cout << "Tempat hidup         : Darat" << endl;
            cout << "Jumlah kaki          : "; cin >> DataHewan.kaki[i];
            cout << "Apakah menyusui      : "; cin >> DataHewan.susu[i];
            cout << "Suara                : "; cin >> DataHewan.suara[i];
        }
        else if (DataHewan.nama_hewan[i] == "lumba-lumba", "paus", "nemo", "hiu", "ikan pari"){
            cout << "Jenis Kelamin          : "; cin >> DataHewan.jenis_kelamin[i];
            cout << "Cara berkembangbiak    :  "; cin >> DataHewan.biak[i];
            cout << "Alat pernafasan        : "; cin >> DataHewan.nafas[i];
            cout << "Apakah karnivora?      :  "; cin >> DataHewan.karni[i];
            cout << "Tempat hidup         : Laut" << endl;
            cout << "Bentuk sirip           : "; cin >> DataHewan.sirip[i];
            cout << "Bentuk Pertahanan Diri : ";cin >> DataHewan.tahan[i];
        }
        else {
            cout << "Jenis hewan yang anda masukan tidak ada!";
        }
    }
    system("cls");

    cout << "=================================================================================================================================" << endl;
    cout << "|                                                           Data Hewan                                                           |" << endl;
    cout << "=================================================================================================================================" << endl;
    cout << "=================================================================================================================================" << endl;
    cout << "|  Nama Hewan  |   Jenis Kel   |    Cara Berkembangbiak    |   Alat Pernafasan   |     Apakah Karnivora     |    Tempat hidup    |" << endl;
    cout << "=================================================================================================================================" << endl;

    for(int i = 0; i<n; i++){
        cout << "   " << setiosflags(ios::left) << setw(10) << DataHewan.nama_hewan[i];
        cout << "   " << setiosflags(ios::left) << setw(10) << DataHewan.jenis_kelamin[i];
        cout << "         " << setiosflags(ios::left) << setw(10) << DataHewan.biak[i];
        cout << "          " << setiosflags(ios::left) << setw(10) << DataHewan.nafas[i];
        cout << "          " << setiosflags(ios::left) << setw(10) << DataHewan.karni[i];
    }
    cout << endl;
    return 0;
}
