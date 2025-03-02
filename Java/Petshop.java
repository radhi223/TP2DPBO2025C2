class Petshop {
    protected String ID_produk;
    protected String nama_produk;
    protected int stok_produk;
    protected int harga_produk;
    
    public Petshop() {
        this.ID_produk = "";
        this.nama_produk = "";
        this.stok_produk = 0;
        this.harga_produk = 0;
    }
    
    public Petshop(String id, String nama, int stok, int harga) {
        this.ID_produk = id;
        this.nama_produk = nama;
        this.stok_produk = stok;
        this.harga_produk = harga;
    }
    
    public void setId(String id) {
        this.ID_produk = id;
    }
    
    public void setNama(String nama) {
        this.nama_produk = nama;
    }
    
    public void setStok(int stok) {
        this.stok_produk = stok;
    }
    
    public void setHarga(int harga) {
        this.harga_produk = harga;
    }
    
    public String getId() {
        return this.ID_produk;
    }
    
    public String getNama() {
        return this.nama_produk;
    }
    
    public int getStok() {
        return this.stok_produk;
    }
    
    public int getHarga() {
        return this.harga_produk;
    }
}