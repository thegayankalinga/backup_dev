getwd()
setwd("/Users/gayan/Developer/R-language/ps-lab5")
getwd()

companyData <- read.table("Data 5.txt", header = TRUE, sep = ",")
fix(companyData)

companyData
names(companyData) <- c("X1", "X2")
companyData

attach(companyData)


#### 1) Draw a histogram for the above data.####
hist(
  X2, 
  main="Histogram for Company Data", 
  xlab = "Frequency"
  )
abline(h=0)

#### 2) Draw a histogram using seven classes where the lower limit is 130 and an upper limit of 270.####
#length = nof of classes + 1 = 7+1=8
histogramForCompanyData = hist(X2,
     main="Histogram with 7 Classes",
     xlab = "Frequency",
     breaks = seq(130,270,length = 8)
     )


#### 3) Construct the frequency distribution for the above specification.####
#1. identify the break points
histogramBreaks <- round(histogramForCompanyData$breaks)
histogramBreaks

#2. identify frequencies of each class
frequencyCounts <- histogramForCompanyData$counts
frequencyCounts

#3. Identify the mid points of each class
frequencyMids <- histogramForCompanyData$mids
frequencyMids

#create  a empty vector
classes <- c()

for(i in 1:length(histogramBreaks-1)){
  classes[i] <- paste0("{", histogramBreaks[i], ",", histogramBreaks[i+1], "}")
}

#bind two columns together
cbind(Classes = classes, Frequency=frequencyCounts)

#### 4) Portray the distribution in the form of a frequency polygon. ####

#draw in the same plot (histogram)
lines(histogramForCompanyData$mids, frequencyCounts)

#draw as a new plot (without the histogram)
#1st Type -> type = o (line only)
plot(frequencyMids, 
     frequencyCounts, 
     type = "l", 
     main = "Histogram with FP", 
     xlab = "Shareholder", 
     ylab = "Frequency",
     ylim = c(0, max(frequencyCounts))
     )

#2nd Type -> type = o (line & points)
plot(frequencyMids, 
     frequencyCounts, 
     type = "o", 
     main = "Histogram with FP", 
     xlab = "Shareholder", 
     ylab = "Frequency",
     ylim = c(0, max(frequencyCounts))
    )

#3rd Type -> type = o (only points)
plot(frequencyMids, 
     frequencyCounts, 
     type = "p", 
     main = "Histogram with FP", 
     xlab = "Shareholder", 
     ylab = "Frequency",
     ylim = c(0, max(frequencyCounts))
)
  
#### 5) Portray the distribution in a less-than cumulative frequency polygon.####

cum.freq <- cumsum(frequencyCounts)
cum.freq

#empty vector
new <- c()
for(i in 1:length(histogramBreaks)){
  if(i==1){
    new[i]=0
  }else{
    new[i] <- cum.freq[i-1]
  }
}

new
plot(histogramBreaks,
     new,
     type="o",
     main = "plot",
     xlab = "Shareholders",
     ylab = "Cum Freq",
     ylim = c(0,max(cum.freq))
              )
cbind(Upper = histogramBreaks, CumFreq = new)

#### 6) Based on the polygon, three out of four (75%) of the companies have how many shareholders or less?####
#not done. 








































