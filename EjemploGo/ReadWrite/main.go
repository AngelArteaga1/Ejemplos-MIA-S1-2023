package main

import (
	"encoding/binary"
	"fmt"
	"os"
	"unsafe"
)

type Person struct {
	ID   uint32
	Name [20]byte
	Age  uint32
}

func main() {
	// abrimos o creamos un archivo binario
	file, err := os.Create("persons.bin")
	if err != nil {
		fmt.Println("\033[31m[Error] > Al crear el archivo:", err, "\033[0m")
		return
	}
	defer file.Close()
	// Crear una estructura Person, persona 1
	p1 := Person{
		ID:   1,
		Name: [20]byte{'J', 'o', 'h', 'n', ' ', 'D', 'o', 'e'},
		Age:  25,
	}

	// Escribir la estructura en un archivo binario
	err = binary.Write(file, binary.LittleEndian, &p1)
	if err != nil {
		fmt.Println("\033[31m[Error] > Al escribir en el archivo:", err, "\033[0m")
		return
	}

	// Crear una estructura Person, persona 1
	p1 = Person{
		ID:   2,
		Name: [20]byte{'A', 'n', 'g', 'e', 'l', ' ', 'A', 'G'},
		Age:  22,
	}
	// Escribir la estructura en un archivo binario
	err = binary.Write(file, binary.LittleEndian, &p1)
	if err != nil {
		fmt.Println("\033[31m[Error] > Al escribir en el archivo:", err, "\033[0m")
		return
	}

	fmt.Println("\033[32m[Exito] > Estructura Person escrita en el archivo \033[36m'./persons.bin'\033[0m")

	// Leer la estructura desde el archivo binario
	var p2 Person

	file, err = os.Open("persons.bin")
	if err != nil {
		fmt.Println("\033[31m[Error] > Al abrir el archivo:", err, "\033[0m")
		return
	}
	defer file.Close()

	size := unsafe.Sizeof(Person{}) // Tambien se puede utilizar 'unsafe.Sizeof(p2)'
	file.Seek(int64(size), 0)
	err = binary.Read(file, binary.LittleEndian, &p2)
	if err != nil {
		fmt.Println("\033[31m [Error] > Al leer el archivo:", err, "\033[0m")
		return
	}

	fmt.Println("\033[32m[Exito] > Estructura Person leída desde el archivo:\033[0m")
	fmt.Printf("\tid: %d\n", p2.ID)
	fmt.Printf("\tname: %s\n", string(p2.Name[:]))
	fmt.Printf("\tage: %d\n", p2.Age)
}
