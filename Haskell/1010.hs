-- https://www.beecrowd.com.br/judge/pt/problems/view/1010
-- Comment
{- Multiline comments can be enclosed
in a block like this.
-}

import Text.Printf(printf)

main = do
    values <- getLine
    let list = words values

    values2 <- getLine
    let list2 = words values2

    let a = list !! 0
    let b = list !! 1
    let c = list !! 2
    let d = list2 !! 0
    let e = list2 !! 1
    let f = list2 !! 2 

    putStr "VALOR A PAGAR: R$ "

    printf "%.2f\n" ( (read b :: Double )*(read c :: Double ) + (read e :: Double )*(read f :: Double ) )

