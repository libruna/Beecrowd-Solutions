package main
 
import (
    "fmt"
)
 
func main() {

    var nome string
    var salarioFixo, montante, total float64

    fmt.Scanf("%s", &nome)
    fmt.Scanf("%f", &salarioFixo)
    fmt.Scanf("%f", &montante)

    total = ((montante * 15) / 100) + salarioFixo

    fmt.Printf("TOTAL = R$ %.2f\n", total)
}
