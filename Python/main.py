from Baju import Baju
from Aksesoris import Aksesoris
from Petshop import Petshop

tokok = []
acc = []
clothes = []
id_counter = 111
stop = False

while not stop:
    print("Selamat datang di Isekai Konbini! Silahkan pilih opsi di bawah ini :\n")
    print("0. exit\n")
    print("1. Menampilkan produk yang tersedia\n")
    print("2. Menambahkan produk baru\n")
    
    try:
        choice = int(input("Masukkan pilihan: "))
    except ValueError:
        continue
    
    if choice == 1:
        print("Menampilkan produk...\n")
    elif choice == 2:
        print("Pilih Jenis Produk :\n")
        print("1. Aksesoris\n")
        print("2. Baju\n")
        print("3. Lain-lain\n")
        
        try:
            choice = int(input("Masukkan pilihan: "))
        except ValueError:
            continue
        
        try:
            nama = input("Masukkan nama produk: ")
            stok = int(input("Masukkan stok: "))
            harga = int(input("Masukkan harga: "))
            
            if choice == 1:
                bahan = input("Masukkan bahan: ")
                warna = input("Masukkan warna: ")
                acc.append(Aksesoris("Aksesoris", bahan, warna))
            elif choice == 2:
                bahan = input("Masukkan bahan: ")
                warna = input("Masukkan warna: ")
                untuk = input("Masukkan untuk siapa: ")
                size = input("Masukkan size: ")
                merk = input("Masukkan merk: ")
                clothes.append(Baju(untuk, size, merk))
            else:
                tokok.append(Petshop(str(id_counter), nama, stok, harga))
                id_counter += 1
        except ValueError:
            continue
    elif choice == 0:
        stop = True
