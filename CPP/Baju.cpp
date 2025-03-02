#include "Aksesoris.cpp"

class Baju : public Aksesoris
{
    private:
        string untuk;
        string size;
        string merk;

    public:
        Baju(){
            this->untuk = "";
            this->size = "";
            this->merk = "";
        };
        
        Baju(string untuk, string size, string merk)
        {
            this->untuk = untuk;
            this->size = size;
            this->merk = merk;
        }
        
        void setUntuk(string untuk)
        {
            this->untuk = untuk;
        }

        void setSize(string size)
        {
            this->size = size;
        }

        void setMerk(string merk)
        {
            this->merk = merk;
        }

        string getUntuk()
        {
            return this->untuk;
        }

        string getSize()
        {
            return this->size;
        }

        string getMerk()
        {
            return this->merk;
        }
        
        ~Baju(){};
};
