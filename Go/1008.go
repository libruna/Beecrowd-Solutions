package main
 
import (
    "fmt"
)
 
func main() {

   	var funcionario, horas int
	var valor float64

	fmt.Scanf("%d", &funcionario)
	fmt.Scanf("%d", &horas)
	fmt.Scanf("%f", &valor)

	salario := valor * float64(horas)

	fmt.Printf("NUMBER = %d\n", funcionario)
	fmt.Printf("SALARY = U$ %.2f\n", salario)

}
