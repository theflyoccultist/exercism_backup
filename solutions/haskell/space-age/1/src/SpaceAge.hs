module SpaceAge (Planet(..), ageOn) where

data Planet = Mercury
            | Venus
            | Earth
            | Mars
            | Jupiter
            | Saturn
            | Uranus
            | Neptune

roundTo n x = (fromInteger $ round $ x * (10^n)) / (10.0^^n)

ageOn :: Planet -> Float -> Float
ageOn planet seconds = roundTo 2 (seconds / year)
  where
    year = case planet of
      Earth -> 31557600
      Mercury -> 31557600 * 0.2408467
      Venus -> 31557600 * 0.61519726
      Mars -> 31557600 * 1.8808158
      Jupiter -> 31557600 * 11.862615
      Saturn -> 31557600 * 29.447498
      Uranus -> 31557600 * 84.016846
      Neptune -> 31557600 * 164.79132