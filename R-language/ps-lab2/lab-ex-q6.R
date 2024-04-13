#Write a loop structure to scan through an integer vector to determine the index of the maximum value.
z <- c(1, 2, 6, 23, 70, 43)
max <- 0

for(i in 1:length(z)){
  if(z[i]>max){
    max <- z[i]
  }
}
print(max)

#Q 7-.Do the same without using a loop.(lazy method)
z[which.max(z)]
z[which.min(z)]

