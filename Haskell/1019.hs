-- https://www.beecrowd.com.br
{- Multiline comments can be enclosed
in a block like this.
-}


main = do
    n <- readLn :: IO Int --Read answer from terminal and covert

    let seconds = n `rem` 60 -- `rem` return thr rest of an division
    let temp = n `div` 60 -- `div` divide into integer numbers
    
    let minutes = temp `rem` 60

    let hours = temp `div` 60

    putStr $ show (hours)
    putStr ":"
    putStr $ show ( minutes )
    putStr ":"
    putStrLn $ show ( seconds ) -- Ln break line