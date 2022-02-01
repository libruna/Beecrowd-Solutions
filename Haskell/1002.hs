-- https://www.beecrowd.com.br/judge/pt/problems/view/1001
-- Comment
{- Multiline comments can be enclosed
in a block like this.
-}

import Text.Printf(printf)

main = do
    a <- getLine --Read answer from terminal

    putStr "A=" -- Print text without break line

    -- "read variableName :: Double" convert string to float with double precision

    printf "%.4f\n" ((read a :: Double) ^ 2 * 3.14159 )