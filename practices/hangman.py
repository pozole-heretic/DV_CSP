import random

word = ["rhythm"]

guess = input("What do you think the word is?: ").capitalize()

attempts = 0 #or 6

if guess == "Rhythm":
    print("Congratulations! You guessed the word!")
else:
