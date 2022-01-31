-- https://www.beecrowd.com.br/judge/pt/problems/view/1001
-- Comment
{- Multiline comments can be enclosed
in a block like this.
-}


main = do
    a <- getLine --Read answer from terminal
    b <- getLine

    putStr "X = " -- Print text without break line

    -- "read variableName :: Int" convert string to integer

    putStrLn $ show ( (read a :: Int) + (read b :: Int) )