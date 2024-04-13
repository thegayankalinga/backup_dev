#### Question 01 Identify the variables and import the data ####
#Set the Directory
getwd()
setwd("/Users/gayan/Developer/R-language/ps-lab03")
getwd()

#import data
dataset1 <- read.csv("DATA 3.csv", header = TRUE)
dataset1

#Get the data in the editor mode
fix(dataset1)

#change the column names (Rename)
names(dataset1) <- c("Age", "Gender", "Accomodation")

#Change the categorical data in each column
#1. do the gender column
dataset1$Gender <- factor(dataset1$Gender, c(1,2), c("Male", "Female"))

#2. change the accommodation column
dataset1$Accomodation <- factor(dataset1$Accomodation, c(1,2,3), c("Stay at Home", "Boarded Student", "Lodging"))

#Attaching the modified data to the dataset.
#Accessing the signle columns without mensioning the whole dataset
attach(dataset1)


#### Question 02 analyze the data in a single variable at a time (uni variate analysis)####
#categorical data types -> pie charts & bar charts 

#1. Frequency Table 
gender.freq <- table(Gender)
acc.freq <- table(Accomodation)
gender.freq
acc.freq

#Create pie chart & bar chart using the frequency table 
#Pie charts
pie(gender.freq, "Pie Chart for Gender")
pie(acc.freq,"Accomodation")

#Bar Charts
barplot(gender.freq, main="Gender Bar Chart", ylab = "Frequency", xlab = "Gender")
#Start the x axis form 0
abline(h=0)

barplot(acc.freq, main="Accomonation", ylab = "Frequency", xlab = "Accomodation")

#Box Plot
boxplot(Age, main="Boxplot for Age", ylab="Age", outpch=8)



#### Question 03 analyse two variables together (bivariate analysis)####
#stack bar charts, clustered bar charts 

#1. Create a two way frequency table
gender_acc.freq <- table(Gender, Accomodation)
gender_acc.freq

#stack bar chart
barplot(gender_acc.freq, main="Gender & Accommodation", legend=rownames(gender_acc.freq))
abline(h=0)

#clustered bar charts
barplot(gender_acc.freq, beside = TRUE, main="Gender & Accommodation", legend=rownames(gender_acc.freq))
abline(h=0)


#### Question 4 Describe age with accommodation & age with gender####
#side by side box plot
boxplot(Age~Gender, main= "Box for Age by Gender", xlab="Gender", ylab="Age")
boxplot(Age~Accomodation, main="Box for age & acc", xlab="Accomodation", ylab ="Age", outpch=8)


#### Question 5 Find the mean age for all the combinations of gender and accommodation.####
#two categorical & one numerical
xtabs(Age~Gender+Accomodation) / gender_acc.freq
