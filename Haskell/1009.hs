-- https://www.beecrowd.com.br/judge/pt/problems/view/1008
-- Comment
{- Multiline comments can be enclosed
in a block like this.
-}

import Text.Printf(printf)

main = do
    a <- getLine --Read answer from terminal
    b <- getLine
    c <- getLine

    putStr "TOTAL = R$ "

    printf "%.2f\n" ( (read b :: Double ) + (read c :: Double )*0.15 )