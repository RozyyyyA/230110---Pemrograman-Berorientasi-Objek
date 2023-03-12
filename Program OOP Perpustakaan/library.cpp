#include <iostream>
#include <string>
#include <vector>

using namespace std;

// class Library untuk merepresentasikan perpustakaan
class Library {
private:
    vector<Book> books_;
public:
    void addBook(Book book) {
        books_.push_back(book);
    }

    void displayBooks() {
        if (books_.size() == 0) {
            cout << "Tidak ada buku yang tersedia di perpustakaan." << endl;
        } else {
            cout << "Daftar Buku di Perpustakaan:" << endl;
            for (int i = 0; i < books_.size(); i++) {
                cout << "Buku #" << (i+1) << endl;
                cout << "Judul: " << books_[i].getTitle() << endl;
                cout << "Penulis: " << books_[i].getAuthor() << endl;
                cout << "Tahun Terbit: " << books_[i].getYear() << endl << endl;
            }
        }
    }

    void updateBook(int bookIndex, string title, string author, int year) {
        books_[bookIndex].setTitle(title);
        books_[bookIndex].setAuthor(author);
        books_[bookIndex].setYear(year);
        cout << "Buku berhasil diupdate." << endl;
    }

    void deleteBook(int bookIndex) {
        books_.erase(books_.begin() + bookIndex);
        cout << "Buku berhasil dihapus." << endl;
    }

    void searchBook(string query) {
        vector<Book> results;
        for (int i = 0; i < books_.size(); i++) {
            if (books_[i].getTitle().find(query) != string::npos ||
                books_[i].getAuthor().find(query) != string::npos) {
                results.push_back(books_[i]);
            }
        }

        if (results.size() == 0) {
            cout << "Buku dengan kata kunci '" << query << "' tidak ditemukan." << endl;
        } else {
            cout << "Hasil Pencarian untuk '" << query << "':" << endl;
            for (int i = 0; i < results.size(); i++) {
                cout << "Buku #" << (i+1) << endl;
                cout << "Judul: " << results[i].getTitle() << endl;
                cout << "Penulis: " << results[i].getAuthor() << endl;
                cout << "Tahun Terbit: " << results[i].getYear() << endl << endl;
            }
        }
    }
};
