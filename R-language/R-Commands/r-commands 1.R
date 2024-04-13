#R-Lab 01
print(100:200)

#Get the current working directory 
getwd()

#Set the current working directory
#for windows use setwd("C:\\Users\\User\\Desktop\\lab1")
setwd("/Users/gayan/Developer/R-language/ps-lab01")
getwd()

#Documentation of function or the object
?solve
help("data.frame")


#Adding a Packages
library(class)

#Removing a package
detach("package:class", unload = TRUE)

#Install a new package to the library
install.packages("ggplot2")
library(ggplot2)

#Scalar Operators 
2+8
900-248
50*412
99/3
#exponent
4^2
4**2
#modular -> remainder value
9%%2
#integer division -> quotient value 
9%/%2

#Logical Operators
x=5
y=-4

isTRUE(x==y)
isTRUE(x>y)
isTRUE(x<=y)
isTRUE(x==5)
isTRUE(x<6 & y>0)
isTRUE(x<6 | y>0)
isTRUE(x != y)

#Assignment operators 
#(local & global)
#1 & #2 for local environment (2nd will be used more)
a=5
a <- 5

#3 global environment (inside a function)
a <<- 10

#Fundamental Data Objects
# Six types of data objects
#1 - vectors - sequence of numbers or characters (array like matrices)
#2 - list - collection of objects
#3 - factor - sequence assigning a category to each index
#4 - data.frame - table like structure (for experimental data)
#5 - environment - hash table (key value pair)


#1 - Vectors (c)
myVector <- c(1,2,3,4,5)
myVector
class(myVector)

e <- c('a', 'b', 'c')
class(e)

#2 - List - collection of objects
p <- c(1,2,3)
q <- "green"
r <- 21
p
q
r

Data <- list(p, q, r)
Data
Data[2]
class(Data)


#3 - Factor - sequence assigning a category to each index
gender <- c(0,1,0,1,0,0,1)
gender

Gender <- factor(gender, c(0,1), c("Male", "Female"))
Gender
class(Gender)

#4 - Matrix (same like vector but a matrices)
#row by row & column by column
matrix1 <- matrix(c(1,2,3,4), nrow = 2, ncol = 2, byrow = TRUE)
matrix1

matrix2 <- matrix(c(1,2,3,4), nrow = 2, ncol = 2, byrow = FALSE)
matrix2
class(matrix2)

#4 - data.frame - table like structure (for experimental data)
height <- c(67, 89, 43, 90)
weight <- c(56, 34, 49, 67)

data_set <- data.frame(height, weight)
data_set


#5 - environment - hash table (key value pair)













