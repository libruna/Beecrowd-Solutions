-- https://www.beecrowd.com.br
{- Multiline comments can be enclosed
in a block like this.
-}

main = do
    a <- readLn :: IO Int --Read answer from terminal as Integer

    let result = a * 2
    
    putStr $ show ( result  ) -- Print text without break line
    putStrLn " minutos" -- Print text with break line