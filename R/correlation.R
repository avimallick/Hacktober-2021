set <- read.csv(file = "/Users/avinashmallick/R Projects/data.csv")

head(set)

#If no method is specified, by default Pearson correlation is taken by the function
cor(set)
cor(set, method = "kendall")
cor(set, method = "spearman")



library(corrplot)

#if no method is specified, by default Circle plot is chosen
corrplot(cor(set))
corrplot(cor(set), method="pie")
corrplot(cor(set), method="number")