#get current working directory
getwd()

#change the current working directory
setwd("/Users/gayan/Developer/R-language")
getwd()

#import
#read.csv -> work only for csv file types
csvdata <- read.csv("DATA 2.csv", header=TRUE, sep = ",")

print(csvdata)

#read.table -> work for all file types (txt, etc...)
txtdata <- read.table("DATA 2.txt", header = TRUE, sep = ",")
txtdata


#export
#two column data frame
lab2dataframe <- data.frame(column1=c("value1", "value2", "value 3"), column2=c(100,320,500))
print(lab2dataframe)

#export to csv with extension 
write.csv(lab2dataframe, "/Users/gayan/Developer/R-language/lab2.csv", row.names = FALSE)

#file name without extension
write.table(lab2dataframe, "/Users/gayan/Developer/R-language/lab2", row.names = FALSE)




