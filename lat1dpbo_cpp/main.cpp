#include <bits/stdc++.h>
#include "Mahasiswa.cpp"

using namespace std;

int main(){
    Mahasiswa data1("Alyaa", "2006412", "Ilmu Komputer", "FPMIPA");
    Mahasiswa data2("Jordan", "2000001", "Matematika", "FPMIPA");

    cout << "Data Mahasiswa" << '\n';
    cout << "Nama          : " << data1.get_name() << '\n';
    cout << "NIM           : " << data1.get_nim() << '\n';
    cout << "Program Studi : " << data1.get_prodigy() << '\n';
    cout << "Fakultas      : " << data1.get_faculty() << '\n';
    cout << "-------------------------- \n";
    
    cout << "Data Mahasiswa" << '\n';
    cout << "Nama          : " << data2.get_name() << '\n';
    cout << "NIM           : " << data2.get_nim() << '\n';
    cout << "Program Studi : " << data2.get_prodigy() << '\n';
    cout << "Fakultas      : " << data2.get_faculty() << '\n';
    cout << "-------------------------- \n";
    
    //Menambahkan data
    
    cout << "Silahkan masukan jumlah data mahasiswa yang ingin ditambah :\n";
    
    int i, n = 0;
    string name, nim, prodigy, faculty;
    
    list<Mahasiswa> llist;
    cin >> n;
    cout << "Silahkan masukan data Mahasiswa : \n";
    for(i = 0; i < n; i++){
        Mahasiswa temp;
        
        //Input data mahasiswa
        cin >> name >> nim >> prodigy >> faculty;
        
        temp.set_name(name);
        temp.set_nim(nim);
        temp.set_prodigy(prodigy);
        temp.set_faculty(faculty);
        
        llist.push_back(temp);
    }
    
    i = 0;
    for(list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++){
        cout << "Nama          : " << it->get_name() << '\n';
        cout << "NIM           : " << it->get_nim() << '\n';
        cout << "Program Studi : " << it->get_prodigy() << '\n';
        cout << "Fakultas      : " << it->get_faculty() << '\n';
        cout << "-------------------------- \n";
        i++;
    }

    return 0;
}