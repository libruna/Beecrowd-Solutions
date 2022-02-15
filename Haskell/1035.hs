-- https://www.beecrowd.com.br
{- Multiline comments can be enclosed
in a block like this.
-}

import Text.Printf(printf) -- library import

main = do
    
    input <- getLine
    let list = words input

    let a = read (list !! 0) :: Int
    let b = read (list !! 1) :: Int
    let c = read (list !! 2) :: Int
    let d = read (list !! 3) :: Int
 
    if b > c && d > a && (c + d) > (a + b) && c > 0 && d > 0 && a `rem` 2 == 0
    then

       putStrLn "Valores aceitos"

    else do
       
       putStrLn "Valores nao aceitos"