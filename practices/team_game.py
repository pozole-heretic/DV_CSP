import random
words = ["rhythm", "queue", "sixth", "jazz", "gym", "cryptic"] #this sets a list of words for the computer to choose from

word = random.choice(words) #this randomly chooses one word from the list above to use for the game
attempts = 0 

def hangman():
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
        
list_of_guessed_letters = []
def game_loop():
    global attempts
    while True:
        display_words = ""
        for letter in word:
            if letter in list_of_guessed_letters:
                display_words += letter
            else:
                display_words += "_"

        print(display_words)
        hangman()
        if display_words == word:
            print("Congratulations! You won the game!")
            break
        guess = input("What do you think one of the letters in the word is?: ").lower()

        list_of_guessed_letters.append(guess)
        if guess not in word:
            attempts += 1

game_loop()