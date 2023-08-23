from abc import ABC, abstractmethod

class Objeto(ABC):
    @abstractmethod
    def get_bytes(self):
        pass
    @abstractmethod
    def set_bytes(self, bytes):
        pass    
    @abstractmethod
    def get_size(self):
        pass

class MBR(Objeto):
    # Constructor
    def __init__(self, size, date, signature, fit):
        self.size = size # int
        self.date = date # int
        self.signature = signature # int
        self.fit = fit # char (1 byte)

    def get_bytes(self):
        bytes = bytearray()
        bytes += self.size.to_bytes(4, byteorder='big')
        bytes += self.date.to_bytes(4, byteorder='big')
        bytes += self.signature.to_bytes(4, byteorder='big')
        bytes += self.fit.encode('utf-8')
        return bytes

    def set_bytes(self, bytes):
        self.size = int.from_bytes(bytes[0:4], byteorder='big')
        self.date = int.from_bytes(bytes[4:8], byteorder='big')
        self.signature = int.from_bytes(bytes[8:12], byteorder='big')
        self.fit = bytes[12:13].decode('utf-8')


    def get_size(self):
        size = 0
        size += 4
        size += 4
        size += 4
        size += 1
        return size
        

mbr = MBR(1234, 4123412, 79, 'B')

bytes = mbr.get_bytes()

print(bytes)

tmp = MBR(0, 0, 0, '')
tmp.set_bytes(bytes)

print(tmp.size)
print(tmp.date)
print(tmp.signature)
print(tmp.fit)
