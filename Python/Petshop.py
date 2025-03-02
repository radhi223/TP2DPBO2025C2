class Petshop:
    def __init__(self, id_produk="", nama_produk="", stok_produk=0, harga_produk=0):
        self.ID_produk = id_produk
        self.nama_produk = nama_produk
        self.stok_produk = stok_produk
        self.harga_produk = harga_produk
    
    def setId(self, id_produk):
        self.ID_produk = id_produk
    
    def setNama(self, nama_produk):
        self.nama_produk = nama_produk
    
    def setStok(self, stok_produk):
        self.stok_produk = stok_produk
    
    def setHarga(self, harga_produk):
        self.harga_produk = harga_produk
    
    def getId(self):
        return self.ID_produk
    
    def getNama(self):
        return self.nama_produk
    
    def getStok(self):
        return self.stok_produk
    
    def getHarga(self):
        return self.harga_produk