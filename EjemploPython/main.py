string = "Hello World"
string2 = "MIA 2023"

def create_empty_file():
    with open("empty_data.bin", "wb") as file:
        num_zeros = 1000
        for i in range(0, 100):
            file.write(b'\x00' * num_zeros)

def modify_file():
    with open("empty_data.bin", "rb+") as file:
        file.seek(30)
        file.write(string.encode('utf-8'))

        file.write(string2.encode('utf-8'))

def read_file():
    with open("empty_data.bin", "rb+") as file:
        position = 30 + len(string)
        file.seek(position)
        segundo_string = file.read(len(string2)).decode('utf-8')
        print(segundo_string)

create_empty_file()
modify_file()
read_file()