-- https://www.beecrowd.com.br/judge/pt/problems/view/1008
{- Multiline comments can be enclosed
in a block like this.
-}

import Text.Printf(printf)

salary :: Double -> Double -> Double -- two variables double, return one variable double
salary x y =  x * y

main = do
    a <- readLn :: IO Int  --Read answer from terminal
    b <- readLn :: IO Double
    c <- readLn :: IO Double

    putStr "NUMBER = " -- Print text without break line
    putStrLn $ show a -- Print text with break line

    putStr "SALARY = U$ "

    printf "%.2f\n" ( salary b c )