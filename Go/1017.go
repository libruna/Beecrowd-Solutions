package main

import (
	"fmt"
)

func main() {
	var tempo, velocidade int 

	fmt.Scanf("%d", &tempo)
	fmt.Scanf("%d", &velocidade)

	gasto := (float64(tempo) * float64(velocidade)) / 12.0
	fmt.Printf("%.3f\n", gasto)
}
