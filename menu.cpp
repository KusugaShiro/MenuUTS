#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

int data[10], t[10];
int z;

void info()
{
system("cls");
cout << "ADIT TOLONGIN DIT NGODING PUSING DIT" << endl;
getch();
}

void dMenu()
{
system("cls");
cout<<"Aplikasi Tampilan Menu"<<"\n";       
cout<<"1. Memasukkan nilai ke array"<<"\n";            
cout<<"2. Menampilkan nilai array"<<"\n";            
cout<<"3. Menyortir array"<<"\n";           
cout<<"4. Info banget nih "<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :"; 
}

void insertion_sort(int data[], int z)
{
int temp;
for (int i = 1; i < z; i++) {
temp = data[i];
int j = i - 1;
while (j >= 0 && data[j] > temp) {
data[j + 1] = data[j];
j--;
}
data[j + 1] = temp;
                            }
}

void copy() {
for (int i = 0; i < z; i++) {
t[i] = data[i];
                            }
}

void menu1()
{
system("cls");
cout << "Masukkan jumlah data: ";
cin >> z;

for (int i = 0; i < z; i++)
        {
cout << "Masukkan Data ke-" << i + 1 << ": ";
cin >> data[i];
        }
copy();
cout << "Tekan sembarang tombol untuk kembali ke menu utama." << endl;
getch();
}

void menu2()
{
system("cls");
cout << "Data yang dimasukkan adalah: ";
for (int i = 0; i < z; i++) {
cout << t[i] << " ";
                            }
cout << endl;
cout << "Tekan sembarang tombol untuk kembali ke menu utama." << endl;
getch();
}

void menu3()
{
system("cls");
cout << "Data yang telah diurutkan adalah: ";
insertion_sort(data, z);
for (int i = 0; i < z; i++) {
cout << data[i] << " ";
                            }
cout << endl;
cout << "Tekan sembarang tombol untuk kembali ke menu utama." << endl;
getch();
}

int main()
{
char pl;
do
  {
dMenu();
pl=getch();
switch (pl)
    {
case '1':
menu1();
break;
case '2':
menu2();
break;
case '3':
menu3();
break;
case '4':
info();
break;
case '5':
break;

default:
system("cls");
cout << "Pilihan Tidak Ada";
getch();
break;
    }

  } while (pl!='5');
return 0;
}