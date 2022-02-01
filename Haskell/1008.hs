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

    putStr "NUMBER = " -- Print text without break line
    putStrLn $ show  (read a :: Int)

    putStr "SALARY = U$ "

    printf "%.2f\n" ( (read b :: Double )*(read c :: Double ) )