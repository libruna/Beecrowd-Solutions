package main
 
import (
	"fmt"
	"math"
)

func main() {
	var n, r, area float64

	fmt.Scanf("%f", &r)

	n = 3.14159
	area = n * math.Pow(r, 2)

	fmt.Printf("A=%.4f\n", area)
}