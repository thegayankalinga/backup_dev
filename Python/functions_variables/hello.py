def main():
  hello()
  name = input("Whats your name ? ")
  hello(name.title())

def hello(to="World"):
  print("hello, ", to)

main()