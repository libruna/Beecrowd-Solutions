package main
 
import (
    "fmt"
)

func main() {

    var codigo, codigo2, qtde, qtde2 int
    var valor, valor2 float64

    fmt.Scanf("%d", &codigo)
    fmt.Scanf("%d", &qtde)
    fmt.Scanf("%f", &valor)

	fmt.Scanf("%d", &codigo2)
    fmt.Scanf("%d", &qtde2)
    fmt.Scanf("%f", &valor2)

    total = (qtde*valor) + (qtde*valor2)

    fmt.Printf("VALOR A PAGAR: R$ %.2f\n", total)
}
