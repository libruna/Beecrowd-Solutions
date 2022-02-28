-- https://www.beecrowd.com.br
{- Multiline comments can be enclosed
in a block like this.
-}

fdivide :: Integer -> Double -> Integer -- two variables, return one variable
fdivide x y =  x `div` (round (y*100) :: Integer) -- `div` divide into integer numbers

frest :: Integer -> Double -> Integer -- two variables, return one variable
frest x y =  x `rem` (round (y*100) :: Integer) -- `rem` return thr rest of an division

fprint :: String -> Integer -> IO () -- two variables, return Input Output
fprint x y = do
    putStr $ show ( y ) -- Print text without break line
    putStr " nota(s) de R$ " -- Print text without break line
    putStrLn x -- Print text with break line

mprint :: String -> Integer -> IO () -- two variables, return Input Output
mprint x y = do
    putStr $ show ( y ) -- Print text without break line
    putStr " moeda(s) de R$ " -- Print text without break line
    putStrLn x -- Print text with break line



main = do
    n <- readLn :: IO Double --Read answer from terminal and convert

    let numberX100Float = n * 100
    let numberX100Int = round numberX100Float :: Integer

    let rs100Int = fdivide numberX100Int 100

    let rs100RestInt = frest numberX100Int 100

    let rs50Int = fdivide rs100RestInt 50

    let rs50RestInt = frest rs100RestInt 50

    let rs20Int = fdivide rs50RestInt 20

    let rs20RestInt = frest rs50RestInt 20

    let rs10Int = fdivide rs20RestInt 10

    let rs10RestInt = frest rs20RestInt 10

    let rs5Int = fdivide rs10RestInt 5

    let rs5RestInt = frest rs10RestInt 5

    let rs2Int = fdivide rs5RestInt 2

    let rs2RestInt = frest rs5RestInt 2

    --coins

    let rs1Int = fdivide rs2RestInt 1

    let rs1RestInt = frest rs2RestInt 1

    let rs050Int = fdivide rs1RestInt 0.5

    let rs050RestInt = frest rs1RestInt 0.5

    let rs025Int = fdivide rs050RestInt 0.25

    let rs025RestInt = frest rs050RestInt 0.25

    let rs010Int = fdivide rs025RestInt 0.10

    let rs010RestInt = frest rs025RestInt 0.10

    let rs005Int = fdivide rs010RestInt 0.05

    let rs005RestInt = frest rs010RestInt 0.05

    let rs001Int = fdivide rs005RestInt 0.01

    let rs001RestInt = frest rs005RestInt 0.01
    
    putStrLn "NOTAS:" -- Print text with break line

    fprint "100.00" rs100Int

    fprint "50.00" rs50Int

    fprint "20.00" rs20Int

    fprint "10.00" rs10Int

    fprint "5.00" rs5Int

    fprint "2.00" rs2Int

    putStrLn "MOEDAS:" -- Print text with break line

    mprint "1.00" rs1Int

    mprint "0.50" rs050Int

    mprint "0.25" rs025Int

    mprint "0.10" rs010Int

    mprint "0.05" rs005Int

    mprint "0.01" rs001Int