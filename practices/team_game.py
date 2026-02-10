import random

words = ["rhythm", "queue", "sixth", "jazz", "gym", "cryptic"] #this sets a list of words for the computer to choose from

word = random.choice(words) #this randomly chooses one word from the list above to use for the game

attempts = 0 

list_of_guessed_letters = []

display_words = ""

guess = input("What do you think the word is?: ").lower()

list_of_guessed_letters.append(guess)

for letter in word:
    if letter in list_of_guessed_letters:
         display_words += letter
    else:
        display_words += "_"

print(display_words)

if display_words == word:
    print("Congratulations! You guessed the word!")
if list_of_guessed_letters == guess:
    print("That was a good guess")
else:
    attempts += 1
print(attempts)

if attempts == 0:
    print('''
---------
|       |
|
|
|
|_________''')
elif attempts == 1:
    print('''
---------
|       |
|       O
|
|
|_________''')

elif attempts == 2:
    print('''
---------
|       |
|       O
|       |
|
|_________''')
elif attempts == 3:
    print('''
---------
|       |
|       O
|       |
|      / \\
|_________''')
elif attempts == 4:
    print('''
---------
|       |
|       O
|      /|\\
|      / \\
|_________''')
print(guess)  