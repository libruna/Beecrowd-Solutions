package main
 
import (
    "fmt"
)
 
func main() {

   	var a, b, c, d int

	fmt.Scanf("%d", &a)
	fmt.Scanf("%d", &b)
	fmt.Scanf("%d", &c)
	fmt.Scanf("%d", &d)

	dif := (a * b) - (c * d)
	fmt.Printf("DIFERENCA = %d\n", dif)
}