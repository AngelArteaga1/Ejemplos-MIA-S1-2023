package main

//go mod init example.com/api
//go get -u github.com/gorilla/mux
// :wq

import (
	"encoding/json"
	"fmt"
	"io/ioutil"
	"log"
	"net/http"
	"strconv"

	"github.com/gorilla/mux"
)

type Operacion struct {
	Left  int `json:"left"`
	Right int `json:"right"`
}

func suma(w http.ResponseWriter, r *http.Request) {
	reqBody, _ := ioutil.ReadAll(r.Body)
	var operacion Operacion
	json.Unmarshal(reqBody, &operacion)
	result := strconv.Itoa(operacion.Left + operacion.Right)
	fmt.Fprintf(w, result)
}

func main() {
	fmt.Println("Api corriendo en 'http://localhost:8000")
	router := mux.NewRouter().StrictSlash(true)
	router.HandleFunc("/suma", suma).Methods("POST")
	log.Fatal(http.ListenAndServe(":8000", router))
}
