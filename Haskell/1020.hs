-- https://www.beecrowd.com.br
{- Multiline comments can be enclosed
in a block like this.
-}

main = do
    n <- readLn :: IO Int --Read answer from terminal and convert


    let years = n `div` 365 -- -- `div` divide into integer numbers

    let restOfYearsInDays = n `rem` 365 -- `rem` return thr rest of an division

    let months = restOfYearsInDays `div` 30 -- -- `div` divide into integer numbers

    let days = restOfYearsInDays `rem` 30 -- `rem` return thr rest of an division

    putStr $ show ( years ) -- Print text without break line
    putStrLn " ano(s)" -- Print text with break line

    putStr $ show ( months ) -- Print text without break line
    putStrLn " mes(es)" -- Print text with break line

    putStr $ show ( days ) -- Print text without break line
    putStrLn " dia(s)" -- Print text with break line