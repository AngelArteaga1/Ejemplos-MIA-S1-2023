package main

//go mod init example.com/api
//go get -u github.com/gorilla/mux

import (
	"fmt"
	"log"
	"net/http"

	"github.com/gorilla/mux"
)

func homeLink(w http.ResponseWriter, r *http.Request) {
	fmt.Fprintf(w, "Hola MIA!")
}

func main() {
	fmt.Println("Api corriendo en 'http://localhost:8080")
	router := mux.NewRouter().StrictSlash(true)
	router.HandleFunc("/", homeLink)
	log.Fatal(http.ListenAndServe(":8000", router))
}
