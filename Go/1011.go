package main

import (
	"fmt"
	"math"
)

const PI = 3.14159

func main() {

	var raio float64

	fmt.Scanf("%f", &raio)

	volume := ((4 / 3.0) * (PI * math.Pow(raio, 3)))

	fmt.Printf("VOLUME = %.3f\n", volume)
}
