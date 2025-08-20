module CollatzConjecture (collatz) where

collatz :: Integer -> Maybe Integer
collatz n 
    | n <= 0 = Nothing
    | otherwise = Just $ toInteger (length (takeWhile (/= 1) (iterate next n)))
  where
    next k
      | even k = k `div` 2
      | otherwise = k * 3 + 1
