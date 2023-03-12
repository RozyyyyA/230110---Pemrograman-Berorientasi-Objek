#include <iostream>
#include <vector>
#include <string>
#include "buku.cpp"
#include "library.cpp"

using namespace std;

int main() {
    Library library;

    int choice;
    do {
    	system ("cls");
    	cout << "========================================" << endl;
    	cout << "     APLIKASI PERPUSTAKAAN FASILKOM     " << endl;
    	cout << "========================================" << endl;
        cout << " Pilihan Menu:" << endl;
        cout << " 1. Tambah Buku" << endl;
        cout << " 2. Tampilkan Buku" << endl;
        cout << " 3. Update Buku" << endl;
        cout << " 4. Hapus Buku" << endl;
        cout << " 5. Cari Buku" << endl;
        cout << " 6. Keluar" << endl;
        cout << "========================================" << endl;
        cout << " Masukkan Pilihan Anda: ";
        cin >> choice;

        switch (choice) {
            case 1: {
            	system ("cls");
                string title, author;
                int year;
                cout << "========================================" << endl;
                cout << "          Menu 1 : Tambah Buku          " << endl;
                cout << "========================================" << endl;
                cout << "Masukkan Judul Buku: ";
                cin.ignore();
                getline(cin, title);
                cout << "Masukkan Nama Penulis: ";
                getline(cin, author);
                cout << "Masukkan Tahun Terbit: ";
                cin >> year;
                Book book(title, author, year);
                library.addBook(book);
                cout << "Buku berhasil ditambahkan." << endl;
                break;
            }
            case 2: {
            	system ("cls");
                library.displayBooks();
                cout << "========================================" << endl;
                cout << "         Menu 2 : Tampilkan Buku        " << endl;
                cout << "========================================" << endl;
                break;
            }
            case 3: {
            	system ("cls");
                int bookIndex;
                string title, author;
                int year;
                library.displayBooks();
                cout << "========================================" << endl;
                cout << "          Menu 3 : Update Buku          " << endl;
                cout << "========================================" << endl;
                cout << "Pilih nomor buku yang ingin diupdate: ";
                cin >> bookIndex;
                cout << "Masukkan Judul Buku Baru: ";
                cin.ignore();
                getline(cin, title);
                cout << "Masukkan Nama Penulis Baru: ";
                getline(cin, author);
                cout << "Masukkan Tahun Terbit Baru: ";
                cin >> year;
                library.updateBook(bookIndex-1, title, author, year);
                break;
            }
            case 4: {
            	system ("cls");
                int bookIndex;
                library.displayBooks();
                cout << "========================================" << endl;
                cout << "           Menu 4 : Hapus Buku          " << endl;
                cout << "========================================" << endl;
                cout << "Pilih nomor buku yang ingin dihapus: ";
                cin >> bookIndex;
                library.deleteBook(bookIndex-1);
                break;
            }
            case 5: {
            	system ("cls");
                string query;
                cout << "========================================" << endl;
                cout << "            Menu 5 : Cari Buku          " << endl;
                cout << "========================================" << endl;
                cout << "Masukkan kata kunci pencarian: ";
                cin.ignore();
                getline(cin, query);
                library.searchBook(query);
                break;
            }
            case 6:
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }

        cout << endl;
    } while (choice != 6);

    cout << "Terima kasih telah menggunakan program perpustakaan ini." << endl;

    return 0;
}