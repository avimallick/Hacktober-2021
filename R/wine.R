library(tidyverse)

wine <- read.csv(file = "/Users/avinashmallick/Downloads/wine.csv")

glimpse(wine)


wine_complete <- na.omit(wine)

glimpse(wine_complete)


mean(wine_complete$Alcohol)

mean(wine_complete$ResidualSugar, trim=0.2)


weighted.mean(wine_complete$Alcohol, wine_complete$ResidualSugar)

t.test(wine_complete$Alcohol)

mosaicplot(sample(wine_complete$Alcohol, 20) ~ sample(wine_complete$ResidualSugar, 20))
