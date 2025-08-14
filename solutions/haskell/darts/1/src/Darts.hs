module Darts (score) where

score :: Float -> Float -> Int
score x y
  | hypo <= 1 = 10
  | hypo <= 5 = 5
  | hypo <= 10 = 1
  | otherwise = 0
  where
    hypo = sqrt $ x**2 + y**2