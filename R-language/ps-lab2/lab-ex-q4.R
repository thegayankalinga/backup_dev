#4
#Consider the vector 1:K, where K is a positive integer. Write an R command that determines
#how many elements in the vector are exactly divisible by 3.

x_vector <- c(1:20)
x_vector

#function to get the count
sum(x_vector %% 3 == 0)

#see the numbers
for(x in 1:20){
  if(x %% 3==0){
    print(x)
  }
}