#Load Built in datasets
library(datasets)

#Base Packages (installed with R but not loaded by default)
#Contributed packages (download, install & load) -> 
#1. CRAN
#2. Crantastisc
#3. Github

#Summarize data
head(iris)
summary(iris)
plot(iris)

#Clear base packages
detach("package:datasets", unload = TRUE)

#Clear Plots
dev.off()

#Clear Console (ctrl +l)
cat("\014")