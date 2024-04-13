#function (take some data - process them & return them)
#can use over & over again

checkfunc <- function(x){
  if(x %% 3==0){
    r=print("this is divisible by 3")
  }else{
    r=print("this is not divisible by 3")
  }
  return(r)
}

checkfunc(9)
checkfunc(17)

checkfunc(20)