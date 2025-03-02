#include "Baju.cpp"
int jum_tokok = 0, jum_acc = 0, jum_clothes = 0, id = 111, iter = 0,
max_nama = 4, max_stok = 4, max_harga = 5, 
max_jenis = 5, max_bahan = 5, max_warna = 5,
max_untuk = 5, max_size = 4, max_merk = 4;

void addTokok(Petshop Tokok[], string nama, int stok, int harga)
{
    id++;
    Petshop toko(to_string(id), nama, stok, harga);
    if (toko.getNama().length() > max_nama) max_nama = toko.getNama().length();
    if (toko.getStok() > max_stok) max_stok = toko.getStok();
    if (toko.getHarga() > max_harga) max_harga = toko.getHarga();
    Tokok[jum_tokok] = toko;
    jum_tokok++;
}

void addAksesoris(Aksesoris Acc[], string nama, int stok, int harga,
                string jenis, string bahan, string warna)
{
    id++;
    Aksesoris akse(jenis, bahan, warna);
    akse.setId(to_string(id));
    akse.setNama(nama);
    akse.setStok(stok);
    akse.setHarga(harga);
    if (akse.getNama().length() > max_nama) max_nama = akse.getNama().length();
    if (akse.getStok() > max_stok) max_stok = akse.getStok();
    if (akse.getHarga() > max_harga) max_harga = akse.getHarga();
    if (akse.getJenis().length() > max_jenis) max_jenis = akse.getJenis().length();
    if (akse.getBahan().length() > max_bahan) max_bahan = akse.getBahan().length();
    if (akse.getWarna().length() > max_warna) max_warna = akse.getWarna().length();
    Acc[jum_acc] = akse;
    jum_acc++;
}

void addBaju(Baju Clothes[], string nama, int stok, int harga,
            string jenis, string bahan, string warna,
            string untuk, string size, string merk)
{
    id++;
    Baju outfit(untuk, size, merk);
    outfit.setId(to_string(id));
    outfit.setNama(nama);
    outfit.setStok(stok);
    outfit.setHarga(harga);
    outfit.setJenis(jenis);
    outfit.setBahan(bahan);
    outfit.setWarna(warna);
    if (outfit.getNama().length() > max_nama) max_nama = outfit.getNama().length();
    if (outfit.getStok() > max_stok) max_stok = outfit.getStok();
    if (outfit.getHarga() > max_harga) max_harga = outfit.getHarga();
    if (outfit.getJenis().length() > max_jenis) max_jenis = outfit.getJenis().length();
    if (outfit.getBahan().length() > max_bahan) max_bahan = outfit.getBahan().length();
    if (outfit.getWarna().length() > max_warna) max_warna = outfit.getWarna().length();
    if (outfit.getUntuk().length() > max_untuk) max_untuk = outfit.getUntuk().length();
    if (outfit.getSize().length() > max_size) max_size = outfit.getSize().length();
    if (outfit.getMerk().length() > max_merk) max_merk = outfit.getMerk().length();
    Clothes[jum_clothes] = outfit;
    jum_clothes++;
}

void Tabel(Petshop Tokok[], Aksesoris Acc[], Baju Clothes[])
{
    int lenstokk = 0, lenhargaa = 0;
    while (max_stok > 1)
    {
        max_stok /= 10;
        lenstokk++;
    }
    while (max_harga > 1)
    {
        max_harga /= 10;
        lenhargaa++;
    }
    if (lenstokk < 4) lenstokk = 4;
    if (lenhargaa < 5) lenhargaa = 5;
    
    
    cout << "TABEL Produk" << endl;
    cout << "|No |ID  |Nama ";
    for (int i = 0; i < max_nama-4; i++) cout << " ";
    cout << "|Stok ";
    for (int i = 0; i < lenstokk-4; i++) cout << " ";
    cout << "|Harga ";
    for (int i = 0; i < lenhargaa-5; i++) cout << " ";
    cout << "|Jenis ";
    for (int i = 0; i < max_jenis-5; i++) cout << " ";
    cout << "|Bahan ";
    for (int i = 0; i < max_bahan-5; i++) cout << " ";
    cout << "|Warna ";
    for (int i = 0; i < max_warna-5; i++) cout << " ";
    cout << "|Untuk ";
    for (int i = 0; i < max_untuk-5; i++) cout << " ";
    cout << "|Size ";
    for (int i = 0; i < max_size-4; i++) cout << " ";
    cout << "|Merk ";
    for (int i = 0; i < max_merk-4; i++) cout << " ";
    cout << "|" << endl;
    for (int i = 0; i < jum_tokok; i++)
    {
        cout << '|' << iter+1 << "  |" << Tokok[i].getId();
        cout << " |" << Tokok[i].getNama();
        for (int j = 0; j < max_nama - Tokok[i].getNama().length(); j++) cout << " ";
        cout << " |" << Tokok[i].getStok();
        for (int j = 0; j < lenstokk - to_string(Tokok[i].getStok()).length() + 1; j++) cout << " ";
        cout << '|' << Tokok[i].getHarga();
        for (int j = 0; j < lenhargaa - to_string(Tokok[i].getHarga()).length() + 1; j++) cout << " ";
        cout << "|- ";
        for (int j = 0; j < max_jenis-1; j++) cout << " ";
        cout << "|- ";
        for (int j = 0; j < max_bahan-1; j++) cout << " ";
        cout << "|- ";
        for (int j = 0; j < max_warna-1; j++) cout << " ";
        cout << "|- ";
        for (int j = 0; j < max_untuk-1; j++) cout << " ";
        cout << "|- ";
        for (int j = 0; j < max_size-1; j++) cout << " ";
        cout << "|- ";
        for (int j = 0; j < max_merk-1; j++) cout << " ";
        cout << "|" << endl;
    }
    for (int i = 0; i < jum_acc; i++)
    {
        cout << '|' << iter+1 << "  |" << Acc[i].getId();
        cout << " |" << Acc[i].getNama();
        for (int j = 0; j < max_nama - Acc[i].getNama().length() + 1; j++) cout << " ";
        cout << "|" << Acc[i].getStok();
        for (int j = 0; j < lenstokk - to_string(Acc[i].getStok()).length() + 1; j++) cout << " ";
        cout << '|' << Acc[i].getHarga();
        for (int j = 0; j < lenhargaa - to_string(Acc[i].getHarga()).length() + 1; j++) cout << " ";
        cout << "|" << Acc[i].getJenis();
        for (int j = 0; j < max_jenis - Acc[i].getJenis().length() + 1; j++) cout << " ";
        cout << "|" << Acc[i].getBahan();
        for (int j = 0; j < max_bahan - Acc[i].getBahan().length() + 1; j++) cout << " ";
        cout << "|" << Acc[i].getWarna();
        for (int j = 0; j < max_warna - Acc[i].getWarna().length() + 1; j++) cout << " ";
        cout << "|- ";
        for (int j = 0; j < max_untuk-1; j++) cout << " ";
        cout << "|- ";
        for (int j = 0; j < max_size-1; j++) cout << " ";
        cout << "|- ";
        for (int j = 0; j < max_merk-1; j++) cout << " ";
        cout << "|" << endl;
    }
    for (int i = 0; i < jum_clothes; i++)
    {
        cout << '|' << iter+1 << "  |" << Clothes[i].getId();
        cout << " |" << Clothes[i].getNama();
        for (int j = 0; j < max_nama - Clothes[i].getNama().length() + 1; j++) cout << " ";
        cout << "|" << Clothes[i].getStok();
        for (int j = 0; j < lenstokk - to_string(Clothes[i].getStok()).length() + 1; j++) cout << " ";
        cout << '|' << Clothes[i].getHarga();
        for (int j = 0; j < lenhargaa - to_string(Clothes[i].getHarga()).length() + 1; j++) cout << " ";
        cout << "|" << Clothes[i].getJenis();
        for (int j = 0; j < max_jenis - Clothes[i].getJenis().length() + 1; j++) cout << " ";
        cout << "|" << Clothes[i].getBahan();
        for (int j = 0; j < max_bahan - Clothes[i].getBahan().length() + 1; j++) cout << " ";
        cout << "|" << Clothes[i].getWarna();
        for (int j = 0; j < max_warna - Clothes[i].getWarna().length() + 1; j++) cout << " ";
        cout << "|" << Clothes[i].getUntuk();
        for (int j = 0; j < max_untuk - Clothes[i].getUntuk().length() + 1; j++) cout << " ";
        cout << "|" << Clothes[i].getSize();
        for (int j = 0; j < max_size - Clothes[i].getSize().length() + 1; j++) cout << " ";
        cout << "|" << Clothes[i].getMerk();
        for (int j = 0; j < max_merk - Clothes[i].getMerk().length() + 1; j++) cout << " ";
        cout << "|" << endl;
    }
    
}

int main(){
    Petshop Tokok[100];
    Aksesoris Acc[100];
    Baju Clothes[100];
    string nama, bahan, warna, untuk, size, merk;
    int stok, harga, stop = 0, choice;

    while (stop == 0)
    {
        cout << "Selamat datang di Isekai Konbini! Silahkan pilih opsi di bawah ini :\n";
        cout << "0.exit" << endl;
        cout << "1.Menampilkan produk yang tersedia\n";
        cout << "2.Menambahkan produk baru\n";
        cin >> choice;
        
        if(choice == 1)
        {
            Tabel(Tokok, Acc, Clothes);
        }
        else if(choice == 2)
        {
            cout << "Pilih Jenis Produk :" << endl;
            cout << "1.Aksesoris\n" << "2.Baju\n" << "3.Lain-lain" << endl;
            cin >> choice;
            if (choice == 1)
            {
                cout << "Masukkan data produk dengan format : 'NAMA[SPASI]STOK[SPASI]HARGA[SPASI]BAHAN[SPASI]WARNA'\n";
                cin >> nama >> stok >> harga >> bahan >> warna;
                addAksesoris(Acc, nama, stok, harga, "Aksesoris", bahan, warna);
            }
            else if (choice == 2)
            {
                cout << "Masukkan data produk dengan format : 'NAMA[SPASI]STOK[SPASI]HARGA[SPASI]BAHAN[SPASI]WARNA[SPASI]UNTUK[SPASI]SIZE[SPASI]MERK'\n";
                cin >> nama >> stok >> harga >> bahan >> warna >> untuk >> size >> merk;
                addBaju(Clothes, nama, stok, harga, "Baju", bahan, warna, untuk, size, merk);
            }
            else if (choice == 3)
            {
                cout << "Masukkan data produk dengan format : 'NAMA[SPASI]STOK[SPASI]HARGA'\n";
                cin >> nama >> stok >> harga;
                addTokok(Tokok, nama, stok, harga);
            }
        }
        else if(choice == 0)
        {
            stop = 1;
        }
    }
    

}