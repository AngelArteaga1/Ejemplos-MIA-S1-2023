package main

import (
	"encoding/binary"
	"fmt"
	"os"
)

func main() {
	var input string
	fmt.Print("Por favor ingrese la imagen pixel que quiere leer: ")
	fmt.Scanln(&input)
	file, err := os.Open(input)
	if err != nil {
		fmt.Println("\033[31m[Error] > Al leer el archivo: ", err, "\033[0m")
		return
	}
	//Tenemos que obtener la cantidad de pixeles dentro de la imagen
	var width uint32
	var height uint32
	binary.Read(file, binary.LittleEndian, &width)
	binary.Read(file, binary.LittleEndian, &height)

	//Ahora leemos cada pixel
	fmt.Println()
	fmt.Print("\t")
	for i := uint32(0); i < height; i++ {
		for j := uint32(0); j < width; j++ {
			var red uint32
			var green uint32
			var blue uint32
			binary.Read(file, binary.LittleEndian, &red)
			binary.Read(file, binary.LittleEndian, &green)
			binary.Read(file, binary.LittleEndian, &blue)
			printColor(red, green, blue)
		}
		fmt.Println()
		fmt.Print("\t")
	}
	fmt.Println()
	fmt.Println("\033[32m[Exito] > Lectura de la imagen \033[36m'" + input + "'\033[32m realizada correctamente\033[0m")
}

func printColor(red uint32, green uint32, blue uint32) {
	if red == 0 && green == 0 && blue == 0 {
		fmt.Print("\033[1;40m   \033[0m") //negro
	} else if red == 255 && green == 255 && blue == 255 {
		fmt.Print("\033[1;47m   \033[0m") //blanco
	} else if red == 255 && green == 0 && blue == 0 {
		fmt.Print("\033[1;41m   \033[0m") //rojo
	} else if red == 143 && green == 70 && blue == 1 {
		fmt.Print("\033[1;42m   \033[0m") //cafe
	} else if red == 252 && green == 193 && blue == 87 {
		fmt.Print("\033[1;43m   \033[0m") //piel
	} else if red == 70 && green == 255 && blue == 0 {
		fmt.Print("\033[1;42m   \033[0m") //verde
	} else if red == 210 && green == 46 && blue == 45 {
		fmt.Print("\033[1;41m   \033[0m") //cafe
	} else if red == 255 && green == 249 && blue == 173 {
		fmt.Print("\033[1;43m   \033[0m") //amarillo
	}
}
