-- https://www.beecrowd.com.br/judge/pt/problems/view/1005
-- Comment
{- Multiline comments can be enclosed
in a block like this.
-}

import Text.Printf(printf)

main = do
    a <- getLine --Read answer from terminal
    b <- getLine

    putStr "MEDIA = " -- Print text without break line

    -- "read variableName :: Double" convert string to an integer

    printf "%.5f\n" ( ((read a :: Double )*3.5 + (read b ::  Double )*7.5) / 11 )