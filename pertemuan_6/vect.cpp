#include <iostream>
#include <vector> 

using namespace std;

int main() {
    system("cls");

    vector<string> nama_karyawan = {"Andi", "Budi", "Santi", "Doni", "Yanto"}; 

    for (int i = 0; i < nama_karyawan.size(); i++) {
        cout << nama_karyawan[i] << endl;
    }

    for (string karyawan : nama_karyawan) { 
        cout << karyawan << endl;
    } 

    nama_karyawan.push_back("Wawan");

    nama_karyawan.pop_back();      
    nama_karyawan.erase(nama_karyawan.begin() + 3); 
}