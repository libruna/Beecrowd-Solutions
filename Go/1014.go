package main

import (
	"fmt"
)

func main() {

	var x, y float64

	fmt.Scanf("%d", &x)
	fmt.Scanf("%d", &y)

	consumo := x / y 

	fmt.Printf("%.3f hm/l", consumo)
}
