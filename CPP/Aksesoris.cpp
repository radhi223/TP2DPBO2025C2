#include "Petshop.cpp"

class Aksesoris : public Petshop
{
    private:
        string jenis;
        string bahan;
        string warna;

    public:
        Aksesoris(){
            this->jenis = "";
            this->bahan = "";
            this->warna = "";
        };
        
        Aksesoris(string jenis, string bahan, string warna)
        {
            this->jenis = jenis;
            this->bahan = bahan;
            this->warna = warna;
        }
        
        void setJenis(string jenis)
        {
            this->jenis = jenis;
        }

        void setBahan(string bahan)
        {
            this->bahan = bahan;
        }

        void setWarna(string warna)
        {
            this->warna = warna;
        }

        string getJenis()
        {
            return this->jenis;
        }

        string getBahan()
        {
            return this->bahan;
        }

        string getWarna()
        {
            return this->warna;
        }
        
        ~Aksesoris(){};
};
