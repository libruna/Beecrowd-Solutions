-- https://www.beecrowd.com.br
{- Multiline comments can be enclosed
in a block like this.
-}

import Text.Printf(printf) -- library import

main = do
    
    input <- getLine
    let list = words input

    let a = read (list !! 0) :: Double
    let b = read (list !! 1) :: Double
    let c = read (list !! 2) :: Double
 
    if a == 0 || (b ** 2 - 4 * a * c) < 0
    then

       putStrLn "Impossivel calcular"

    else do

       let x1 = (- b + (b ** 2 - 4 * a * c) ** (1/2) )/(2 * a)
       let x2 = (- b - (b ** 2 - 4 * a * c) ** (1/2) )/(2 * a)
       putStr "R1 = "
       printf "%.5f\n" x1

       putStr "R2 = "
       printf "%.5f\n" x2