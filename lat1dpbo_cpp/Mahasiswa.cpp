#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    private:
        string name;
        string nim;
        string prodigy;
        string faculty;
    
    public:
        Mahasiswa(){
            this->name = "";
            this->nim = "";
            this->prodigy = "";
            this->faculty = "";
        }

        Mahasiswa(string name, string nim, string prodigy, string faculty){
            this->name = name;
            this->nim = nim;
            this->prodigy = prodigy;
            this->faculty = faculty;
        }

        string get_name(){
            return this->name = name;
        }

        void set_name(string name){
            this->name = name;
        }

        string get_nim(){
            return this->nim = nim;
        }

        void set_nim(string nim){
            this->nim = nim;
        }

        string get_prodigy(){
            return this->prodigy = prodigy;
        }

        void set_prodigy(string prodigy){
            this->prodigy = prodigy;
        }

        string get_faculty(){
            return this->faculty = faculty;
        }

        void set_faculty(string faculty){
            this->faculty = faculty;
        }
};