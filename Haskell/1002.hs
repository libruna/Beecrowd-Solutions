-- https://www.beecrowd.com.br/judge/pt/problems/view/1002
-- Comment
{- Multiline comments can be enclosed
in a block like this.
-}


main = do
    a <- getLine --Read answer from terminal

    putStr "A=" -- Print text without break line

    -- "read variableName :: Double" convert string to float with double precision

    putStrLn $ show ( ( (read a :: Double) ^ 2 ) * 3.14159 )