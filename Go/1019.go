package main

import (
	"fmt"
)

func main() {
	var n int 

	fmt.Scanf("%d", &n)
	
	horas := n/3600
	minutos := (n - (horas*3600)) / 60
	segundos := n - ((horas*3600) + (minutos*60))

	fmt.Printf("%d:%d:%d\n", horas, minutos, segundos)
}
