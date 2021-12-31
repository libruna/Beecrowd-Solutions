package main

import (
	"fmt"
)

func main() {

	var idade int

	fmt.Scanf("%d", &idade)

	anos := idade / 365
	meses := (idade - (anos * 365)) / 30
	dias := idade - ((anos * 365) + (meses * 30))

	fmt.Printf("%d ano(s)\n", anos)
	fmt.Printf("%d mes(es)\n", meses)
	fmt.Printf("%d dia(s)\n", dias)
}