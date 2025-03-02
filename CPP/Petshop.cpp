#include <iostream>
#include <string>

using namespace std;

class Petshop{
    private:
        string ID_produk;
        string nama_produk;
        int stok_produk;
        int harga_produk;
    
    public:
        Petshop(){
            this->ID_produk = "";
            this->nama_produk = "";
            this->stok_produk = 0;
            this->harga_produk = 0;
        }

        Petshop(string id, string nama, int stok, int harga){
            this->ID_produk = id;
            this->nama_produk = nama;
            this->stok_produk = stok;
            this->harga_produk = harga;
        }

        void setId(string id)
        {
            this->ID_produk = id;
        }

        void setNama(string nama)
        {
            this->nama_produk = nama;
        }

        void setStok(int stok_produk)
        {
            this->stok_produk = stok_produk;
        }

        void setHarga(int harga)
        {
            this->harga_produk = harga;
        }

        string getId()
        {
            return this->ID_produk;
        }

        string getNama()
        {
            return this->nama_produk;
        }

        int getStok()
        {
            return this->stok_produk;
        }

        int getHarga()
        {
            return this->harga_produk;
        }

        ~Petshop() {}
};