-- https://www.beecrowd.com.br/judge/pt/problems/view/1006
-- Comment
{- Multiline comments can be enclosed
in a block like this.
-}

import Text.Printf(printf)

main = do
    a <- getLine --Read answer from terminal
    b <- getLine
    c <- getLine

    putStr "MEDIA = " -- Print text without break line

    -- "read variableName :: Double" convert string to an integer

    printf "%.1f\n" ( ( (read a :: Double )*2 + (read b ::  Double )*3 + (read c ::  Double )*5 ) / 10 )