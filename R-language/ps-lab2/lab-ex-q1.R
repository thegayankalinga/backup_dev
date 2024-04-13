#lab questions
#1Compute the real roots of the quadratic equation in the form of ax^2 + 𝑏𝑥 + 𝑐 = 0.
a <- 2
b <- 3
c <- -1

#ax^2 + 𝑏𝑥 + 𝑐 = 0.
#x1 = -b-sqrt(b^-4ac)/2a
#x2 = -b+sqrt(b^2+4ac)/2a

x1 <- (-b-sqrt(b^2-4*a*c))/(2*a)
x2 <- (-b+sqrt(b^2+4*a*c))/(2*a)

#2x^2+3x-1
y <- function(x)(2*x^2+3*x-1)

data.frame("root" = c(x1,x2), "value"=c(y(x1),y(x2)))