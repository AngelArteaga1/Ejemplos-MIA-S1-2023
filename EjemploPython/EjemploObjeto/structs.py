import objeto

class Partition(objeto.Struct):
    def __init__(self):
        self.part_status = '0'
        self.part_type = 'P'
        self.part_fit = 'W'
        self.part_start = 0
        self.part_s = 0
        self.part_name = ' ' * 16

class MBR(objeto.Struct):
    def __init__(self):
        self.mbr_tamano = 0
        self.mbr_fecha_creacion = 0
        self.mbr_dsk_signature = 0
        self.dsk_fit = 'W'
        self.mbr_partition = []
        for i in range(4):
            self.mbr_partition.append(Partition())