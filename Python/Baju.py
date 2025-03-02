from Aksesoris import Aksesoris

class Baju(Aksesoris):
    def __init__(self, untuk="", size="", merk=""):
        super().__init__()
        self.untuk = untuk
        self.size = size
        self.merk = merk
    
    def setUntuk(self, untuk):
        self.untuk = untuk
    
    def setSize(self, size):
        self.size = size
    
    def setMerk(self, merk):
        self.merk = merk
    
    def getUntuk(self):
        return self.untuk
    
    def getSize(self):
        return self.size
    
    def getMerk(self):
        return self.merk
