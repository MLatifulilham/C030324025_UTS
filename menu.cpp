#include <iostream>
#include <conio.h>
using namespace std;

int data[6];
int n=6;

void dMenu() {
system("cls");
cout << "Aplikasi Exchange Sort\n";
cout << "1. Memasukkan data\n";
cout << "2. Menampilkan data\n";
cout << "3. Sorting\n";
cout << "4. Sepatah kata\n";
cout << "5. Exit\n";
cout << "Masukkan angka: ";
}

void mPertama(string pesan) {
system("cls");
cout << "Hallo, saya menu " << pesan;
getch();
}

void inputData() {
    system("cls");
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> data[i];
    }
    cout << "Data berhasil dimasukkan!";
    getch();
}

void tampilData() {
    system("cls");
    if (n == 0) {
        cout << "Belum ada data!";
    } else {
        cout << "Data: ";
        for (int i = 0; i < n; i++) {
            cout << data[i] << " ";
        }
    }
    getch();
}

void tukar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void exchange_sort(int data[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (data[i] < data[j])  // descending
              tukar(&data[i], &data[j]);
        }
    }
}

void sorting() {
    system("cls");
    if (n == 0) {
        cout << "Belum ada data untuk diurutkan!";
    } else {
        exchange_sort(data);
        cout << "Data telah diurutkan!";
    }
    getch();
}

int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    /* code */
    inputData();
    break;
   case '2':
    tampilData();
    /* code */ 
    break;  
   case '3':
    sorting();
    /* code */
    break;  
   case '4':
    mPertama("ke-empat");
    /* code */
    break;  
  case '5':
    system("cls");
    cout << "Martun nuhun";
    getch();
 break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }

} while (pl!='5');
 return 0;
}