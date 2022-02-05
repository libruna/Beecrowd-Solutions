-- https://www.beecrowd.com.br
{- Multiline comments can be enclosed
in a block like this.
-}

import Text.Printf(printf)

main = do
    a <- readLn :: IO Double --Read answer from terminal and covert
    b <- readLn :: IO Double --Read answer from terminal and covert

    let result = (a * b)/12

    printf "%.3f\n" (  result ) -- 3 decimal places