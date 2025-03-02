import java.util.Scanner;
class Main {
    static int jum_tokok = 0, jum_acc = 0, jum_clothes = 0, id = 111, iter = 0, choice, stok, harga,
    max_nama = 4, max_stok = 4, max_harga = 5, 
    max_jenis = 5, max_bahan = 5, max_warna = 5,
    max_untuk = 5, max_size = 4, max_merk = 4;
    static String nama, bahan, warna, untuk, size, merk;
    
    public static void addTokok(Petshop[] Tokok, String nama, int stok, int harga) {
        id++;
        Petshop toko = new Petshop(Integer.toString(id), nama, stok, harga);
        if (toko.getNama().length() > max_nama) max_nama = toko.getNama().length();
        if (toko.getStok() > max_stok) max_stok = toko.getStok();
        if (toko.getHarga() > max_harga) max_harga = toko.getHarga();
        Tokok[jum_tokok] = toko;
        jum_tokok++;
    }
    
    public static void addAksesoris(Aksesoris[] Acc, String nama, int stok, int harga,
                                    String jenis, String bahan, String warna) {
        id++;
        Aksesoris akse = new Aksesoris(jenis, bahan, warna);
        akse.setId(Integer.toString(id));
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
    
    public static void addBaju(Baju[] Clothes, String nama, int stok, int harga,
                               String jenis, String bahan, String warna,
                               String untuk, String size, String merk) {
        id++;
        Baju outfit = new Baju(untuk, size, merk);
        outfit.setId(Integer.toString(id));
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
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Petshop[] Tokok = new Petshop[100];
        Aksesoris[] Acc = new Aksesoris[100];
        Baju[] Clothes = new Baju[100];
        int stop = 0;
        
        while (stop == 0) {
            System.out.println("Selamat datang di Isekai Konbini! Silahkan pilih opsi di bawah ini :\n");
            System.out.println("0.exit\n");
            System.out.println("1.Menampilkan produk yang tersedia\n");
            System.out.println("2.Menambahkan produk baru\n");
            try {
                choice = scanner.nextInt();
            } catch (Exception e) {
            }
            scanner.nextLine();
            
            if (choice == 1) {
                System.out.println("Menampilkan produk...\n");
            } else if (choice == 2) {
                System.out.println("Pilih Jenis Produk :\n");
                System.out.println("1.Aksesoris\n");
                System.out.println("2.Baju\n");
                System.out.println("3.Lain-lain\n");
                choice = scanner.nextInt();
                scanner.nextLine();
                
                if (choice == 1) 
                {
                    System.out.println("Masukkan data produk dengan format : 'NAMA[SPASI]STOK[SPASI]HARGA[SPASI]BAHAN[SPASI]WARNA'\n");
                    try {
                        nama = scanner.next();
                        stok = scanner.nextInt();
                        harga = scanner.nextInt();
                        bahan = scanner.next();
                        warna = scanner.next();
                    } catch (Exception e) {
                    }
                    addAksesoris(Acc, nama, stok, harga, "Aksesoris", bahan, warna);
                }
                else if (choice == 2) {
                    System.out.println("Masukkan data produk dengan format : 'NAMA[SPASI]STOK[SPASI]HARGA[SPASI]BAHAN[SPASI]WARNA[SPASI]UNTUK[SPASI]SIZE[SPASI]MERK'\n");
                    try {
                        nama = scanner.next();
                        stok = scanner.nextInt();
                        harga = scanner.nextInt();
                        bahan = scanner.next();
                        warna = scanner.next();
                        untuk = scanner.next();
                        size = scanner.next();
                        merk = scanner.next();
                    } catch (Exception e) {
                    }
                    addBaju(Clothes, nama, stok, harga, "Baju", bahan, warna, untuk, size, merk);
                }
                else if (choice == 3) {
                    System.out.println("Masukkan data produk dengan format : 'NAMA[SPASI]STOK[SPASI]HARGA'\n");
                    try {
                        nama = scanner.next();
                        stok = scanner.nextInt();
                        harga = scanner.nextInt();
                    } catch (Exception e) {
                    }
                    addTokok(Tokok, nama, stok, harga);
                }
            } else if (choice == 0) {
                stop = 1;
            }
        }
        scanner.close();
    }
}