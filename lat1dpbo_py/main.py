from Mahasiswa import Mahasiswa

datMahasiswa1 = Mahasiswa("Alyaa", "2006412", "Ilmu Komputer", "FPMIPA")
datMahasiswa2 = Mahasiswa("Jordan", "2000031", "Matematika", "FPMIPA")

print("Data Mahasiswa :")
print("Nama          : ", datMahasiswa1.get_name())
print("NIM           : ", datMahasiswa1.get_nim())
print("Program Studi : ", datMahasiswa1.get_prodigy())
print("Fakultas      : ", datMahasiswa1.get_faculty())
print("-----------------------------------------")

print("Nama          : ", datMahasiswa2.get_name())
print("NIM           : ", datMahasiswa2.get_nim())
print("Program Studi : ", datMahasiswa2.get_prodigy())
print("Fakultas      : ", datMahasiswa2.get_faculty())
print("-----------------------------------------")

# Input data mahasiswa
mahasiswas = []

# Masukan banyaknya data yang ingin diinput
print("Silahkan masukan jumlah data mahasiswa yang ingin diinput:")
n = int(input())
print("Silahkan masukan data mahasiswa:")
for i in range (n):
    name = str(input())
    nim = str(input())
    prodigy = str(input())
    faculty = str(input())
    
    mahasiswas.append(Mahasiswa(name,nim, prodigy, faculty))

# print hasil input data
i = 0
for mahasiswa in mahasiswas:
    print("Nama          : ", mahasiswa.get_name())
    print("NIM           : ", mahasiswa.get_nim())
    print("Program Studi : ", mahasiswa.get_prodigy())
    print("Fakultas      : ", mahasiswa.get_faculty())
    print("-----------------------------------------")