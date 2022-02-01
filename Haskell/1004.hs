-- https://www.beecrowd.com.br/judge/pt/problems/view/1004
-- Comment
{- Multiline comments can be enclosed
in a block like this.
-}


main = do
    a <- getLine --Read answer from terminal
    b <- getLine

    putStr "PROD = " -- Print text without break line

    -- "read variableName :: Int" convert string to an integer

    putStrLn $ show ( (read a :: Int ) * (read b :: Int ) )