import random

word = ["Rhythm", "Queue", "Sixth", "Jazz", "Gym", "Cryptic"]

guess = input("What do you think the word is?: ").capitalize()

attempts = 0

if guess in "Rhythm":
    print("Congratulations! You guessed the word!")
else:
    attempts += 1
print(attempts)

user_guess_letters = 


print('''
---------
|       |
|
|
|
|_________''')

"""---------
|       |
|       O
|
|
|_________

---------
|       |
|       O
|       
|
|_________

---------
|       |
|       O
|       |
|
|_________

---------
|       |
|       O
|       |
|      / \\
|_________


---------
|       |
|       O
|      /|\\
|      / \\
|_________"""