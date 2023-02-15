import java.util.Scanner;
import java.util.ArrayList;

public class Main{
    public static void main(String[] args){
        Mahasiswa data1 = new Mahasiswa("Alyaa", "2006412", "Ilmu Komputer","FPMIPA");
        
        System.out.println("Data Mahasiswa\n");
        System.out.println("Nama          : " + data1.getName());
        System.out.println("NIM           : " + data1.getNim());
        System.out.println("Program Studi : " + data1.getProdigy());
        System.out.println("Fakultas      : " + data1.getFaculty());
    }
}