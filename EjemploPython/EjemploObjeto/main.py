import structs

def print_mbr(item):
    print('****************************')
    print('Este es el mbr_tamano:', item.mbr_tamano)
    print('Este es el mbr_fecha_creacion', item.mbr_fecha_creacion)
    print('Este es el mbr_dsk_signature:', item.mbr_dsk_signature)
    for i in range(4):
        print('Este es el mbr_partition[', i, '].part_name:', item.mbr_partition[i].part_name)
    print('****************************')


mbr = structs.MBR()
mbr.mbr_tamano = 100
mbr.mbr_fecha_creacion = 12345423
mbr.mbr_dsk_signature = 101010
for i in range(4):
    mbr.mbr_partition[i].part_name = '1234567890123456'
bytes = mbr.get_bytes()
print(bytes)

mbr2 = structs.MBR()
mbr2.set_bytes(bytes)



# Ahora creamos un archivo
with open("empty_data.bin", "wb") as file:
    num_zeros = 1000
    for i in range(0, 100):
        file.write(b'\x00' * num_zeros)

# Ahora lo modificamos
with open("empty_data.bin", "rb+") as file:
    mbr = structs.MBR()
    file.write(mbr.get_bytes())

# Ahora lo leemos
with open("empty_data.bin", "rb+") as file:
    tmp = structs.MBR()
    size = tmp.get_size()
    bytes = file.read(size)

    print('Este es el bytes:', bytes)

    tmp.set_bytes(bytes)
    print_mbr(tmp)
