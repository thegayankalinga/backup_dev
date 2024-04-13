#Setting the path
getwd()
setwd("/Users/gayan/Developer/R-language/ps-lab4")
getwd()

#Importing
dataSet <- read.table("DATA 4.txt", header = TRUE, sep = "")

#data editor view
fix(dataSet)

#renaming the column
names(dataSet) <- c("Team", "Attendance", "Salary", "Years")
fix(dataSet)
dataSet

#Accessing the single columns without mentioning the whole data set
#dataSet$Attendance -> Attendance
attach(dataSet)

#Obtain the following for each variable

####Box-Plot #### 
# [columnName, main="name of the chart", outline=true, xlab = columnName, horizontal = true, outpch=8]

)
#Boxplot for Attendance
boxplot(
  Attendance, 
  main ="Boxplot for Attendance",
  outline = TRUE,
  xlab = Attendance,
  horizontal = TRUE,
  outpch = 8
      )

#Boxplot for Salary
boxplot(
  Salary,
  main = "Boxplot for Salary",
  outline = TRUE,
  xlab = Salary,
  horizontal = TRUE,
  outpch = 8
      )

#Boxplot for Years
boxplot(Years,
        main = "Boxplot for Years",
        horizontal = TRUE,
        xlab = Years,
        outline = TRUE,
        outpch = 8
        )


#### Histogram ####
#Histogram for Attendance
hist(
  Attendance,
  main = "Historgram for Attendance",
  ylab = "Frequence"
  )
abline(h=0)

#Histogram for Salary
hist(
  Salary,
  main = "Histogram for Salary",
  ylab = "Frequency"
)
abline(h=0)

#Histogram for Years
hist(
  Years,
  main = "Histogram for Years",
  ylab = "Frequency"
)
abline(h=0)


#### Stem-Leaf Plot ####
stem(Attendance)
stem(Salary)
stem(Years)


#### Mean, Median and Standard Deviation. ####
mean(Attendance)
mean(Salary)
mean(Years)

median(Attendance)
median(Salary)
median(Years)

sd(Attendance)
sd(Salary)
sd(Years)


#### First and Third Quartile. ####
quantile(Attendance)[2]
quantile(Attendance)[4]

quantile(Salary)
quantile(Years)

#Inter Quartile Range (IQR)
IQR(Attendance)
IQR(Salary)
IQR(Years)

#Get the 5 number summery
summary(Attendance)


#### function to find the modes of a given set of values. Check the function by finding the of the variable “Years”.####
get.modeValue <- function(value){
  counts <- table(value)
  names(counts)[counts == max(counts)]
}

get.modeValue(Years)





#### function that would produce outliers when the values are given. Check the function with 3 variables ####
get.outliers <- function(val){
  
  Q3 = quantile(val)[4]
  Q1 = quantile(val)[2]
  
  upperBound = Q3 + 1.5 * IQR(val)
  lowerBound = Q1 - 1.5 * IQR(val)
  
  print(paste ("Uppber Bound", upperBound)) 
  print(paste ("Lower Bound", lowerBound))
  
  print (paste ("Outliers", paste(sort(val [ val < lowerBound | val > upperBound]), collapse = ",")))
}

get.outliers(Years)


#two function in paste
#paste (concatenate a vector to get a one character strea)
#paste (default separator no space)
#https://www.youtube.com/watch?v=m_etnMeScJo
