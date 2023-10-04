string_sizes = {
    'part_status': 1,
    'part_type': 1,
    'part_fit': 1,
    'part_name': 16,
    'dsk_fit': 1,
}

class Struct():
    # Método de la clase
    def get_bytes(self):
        bytes = bytearray()
        for _, valor in vars(self).items():
            tipo = type(valor).__name__
            if(tipo == 'int'):
                bytes += valor.to_bytes(4, byteorder='big')
            elif(tipo == 'str'):
                bytes += valor.encode('utf-8')
            elif(tipo == 'list'):
                for item in valor:
                    bytes += item.get_bytes()
            else:
                bytes += valor.get_bytes()
        return bytes
    
    def set_bytes(self, bytes):
        puntero = 0
        for atributo, valor in vars(self).items():
            tipo = type(valor).__name__
            if(tipo == 'int'):
                size = 4
                valor = int.from_bytes(bytes[puntero:puntero + size], byteorder='big')
                setattr(self, atributo, valor)
                puntero += size
            elif(tipo == 'str'):
                size = string_sizes[atributo]
                valor = bytes[puntero:puntero + size].decode('utf-8')
                setattr(self, atributo, valor)
                puntero += size
            elif(tipo == 'list'):
                for item in valor:
                    size = item.get_size()
                    item.set_bytes(bytes[puntero:puntero + size])
                    puntero += size
            else:
                size = valor.get_size()
                valor.set_bytes(bytes[puntero:puntero + size])
                puntero += size

    def get_size(self):
        size = 0
        for atributo, valor in vars(self).items():
            tipo = type(valor).__name__
            if(tipo == 'int'):
                size += 4
            elif(tipo == 'str'):
                size += string_sizes[atributo]
            elif(tipo == 'list'):
                for item in valor:
                    size += item.get_size()
            else:
                size +=  valor.get_size()
        return size