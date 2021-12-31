package main

import (
	"fmt"
	"math"
)

const PI = 3.14159

func main() {

	var A, B, C float64

	fmt.Scanf("%f", &A)
	fmt.Scanf("%f", &B)
	fmt.Scanf("%f", &C)

	triangulo := (A * C) / 2
	circulo := PI * (math.Pow(C, 2))
	trapezio := ((A + B) * C) / 2
	quadrado := B * B
	retangulo := A * B

	fmt.Printf("TRIANGULO: %.3f\n", triangulo)
	fmt.Printf("CIRCULO: %.3f\n", circulo)
	fmt.Printf("TRAPEZIO: %.3f\n", trapezio)
	fmt.Printf("QUADRADO: %.3f\n", quadrado)
	fmt.Printf("RETANGULO: %.3f\n", retangulo)
}
