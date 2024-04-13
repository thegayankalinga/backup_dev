#Setting the path
getwd()
setwd("/Users/gayan/Developer/R-language/ps-lab2")
getwd()

#### Control Flows (If & else)#### 
x <- 4
x

#If
if(x>0){
  print("Positive Language")
}

#If & Else
x <- 7
y <- -2

if(y>0){
  print("Positive Number")
}else{
  print("Negative Number")
}


#Nested If with else if
x <- 4

if(x>0){
  print("Positive Language")
}else if(x<0){
  print("Negative Number")
}else{
  print("X is zero")
}

#Loops (while & for)
#While Loops
i <- 1
while(i < 6){
  print(i)
  i = i+1
}

#For loop (range 7:9 -> 7,8,9)
for(i in 1:10){
  print(i)
}


#### Getting the data from file, Importing Data ####
getwd()

#Import CSV 
dataSet1 <- read.csv("DATA 2.csv")

#View the data in the editor mode & quit using close button before rerun
fix("dataSet1")

#Import Text File 
dataSet2 <- read.table("DATA 2.txt", header = TRUE, sep = ",")
dataSet2
fix("dataSet2")
dataSet2


#### Write Data to File, Exporting Data ####
index <- c(1,2,3)
Name <- c("Gayan", "Dulashi", "Miheli")
marks <- c(23, 55, 40)

myDataFrame <- data.frame(index, Name, marks)
myDataFrame

#CSV
write.csv(myDataFrame, "marks.csv")

#Text
write.table(myDataFrame, "marksText.txt")



#### Functions#### 
#Declaration
myFunctionName <- function(a, b){
  y <- a+b
  #print(y)
  
  #returning the y value
  y
}

#Calling the function
myFunctionName(5, 10)


####Lab Questions####
#Question 01
#Compute the real roots of the quadratic equation in the form of 𝑎𝑥2 + 𝑏𝑥 + 𝑐 = 0.

realRoot <- function(a,b,c){
  x1 <- (-b + sqrt(b^2 - 4*a*c)) / (2*a)
  x2 <- (-b - sqrt(b^2 - 4*a*c)) / (2*a)
  
  print(x1)
  print(x2)
}

realRoot(-10, -9, 1)
realRoot(-9, -9, 6)

#Question 2 -> answer should be 4.125
x <- c(1,2,3)
x[1]/x[2]^3-1+2*x[3]-x[2-1]

#Question 3 - plot of log(x) exp(x) -> skipped

#Question 4 - find the how many elements can be divisible by 3
#Range is 1:K
vector1 <- c(1:20)
sum(vector1 %% 3 == 0)

#Question 5 - determine if a two sets are disjoints - skipped


#Question 6 - find the maximum value index number in a integer vector
dataSet3 <- c(599,67,45,100)
max <- 0
maxIndex <- 0

for(n in 1:length(dataSet3)){
  if(max < dataSet3[n]){
    max <- dataSet3[n]
    maxIndex <- n
  }
}

maxIndex

#Question 7 - Q6 without using a loop
which.max(dataSet3)


#Question 8 - Calculating compound interest 
compoundInterest <- function(p,r,n){
  total = 0
  for (i in 1:n){
    a = (p * (1 +(r/100))^i)
    total = total + a
    print(a)
  }
}

compoundInterest(5000, 11.5, 15)

#Question 9 - skipped 


