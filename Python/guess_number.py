import random

number = random.randint(1, 1000)
attempts = 0
low = 1
higth = 1000

while True:
       ("Guess the number(between 1 and 1000)\n~ ")
       input_number = (low+higth) // 2
       print("My guess number is", input_number)
       attempts += 1
       
       if input_number == number :
              print("Yes, your guess is correct.\n")
              break
       if input_number > number:
              print("Incoorect! Please try to guess a smaller number")
              higth = input_number - 1
       else:
              print("Incoorect! Please try to guess a larger number")   
              low = input_number + 1
              
print("You tried", attempts, "times to find the correct number.")     
