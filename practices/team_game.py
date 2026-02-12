import random


words = ["rhythm", "queue", "sixth", "jazz", "gym", "cryptic", "abyss", "xylophone", "gypsy", "mnemonic", "buck", "avenue", "injury", "awkward"] #this sets a list of words for the computer to choose from

word = random.choice(words) #this randomly chooses one word from the list above to use for the game

attempts = 0 #this variable is so the computer knows how many times the user has tried to guess a letter, it also sets it to 0 every time the user runs the code so they have the fair amount of tries

def hangman(): #this is a function so the game loop can acess it every time by just reading 'hangman()'
    if attempts == 0: #this hangman function checks how many times the user has guessed a letter and prints a hangman image depending on that number. since the code just started, it prints just a blank noose
        print('''
---------
|       |
|
|
|
|_________''')
    elif attempts == 1: #since attempts = 1, it now prints a head
        print('''
---------
|       |
|       O
|
|
|_________''')

    elif attempts == 2: #since attempts = 2, it now prints a head and a body
        print('''
---------
|       |
|       O
|       |
|
|_________''')
    elif attempts == 3: #since attempts = 3, it now prints a head, body, and legs
        print('''
---------
|       |
|       O
|       |
|      / \\
|_________''')
    elif attempts == 4: #since attempts = 4, it now prints the full body, meaning that the user lost
        print('''
---------
|       |
|       O
|      /|\\
|      / \\
|_________''')

list_of_guessed_letters = [] #this variable is blank because the user inputs will fill this list with letters with their guesses. the code can access this list to print either blank spots, or the letters the user guessed

def game_loop(): #this is a function because after the user wins or loses, it can access this whole loop again depending if they want to play again or not
    global attempts 
    while True:
        global attempts
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
        elif attempts == 4:
            print("You lost the game! The man was hung! The word was", word)
            break
        elif attempts < 4:
            guess = input("What do you think one of the letters in the word is?: ").lower()

        list_of_guessed_letters.append(guess)
        if guess not in word:
            attempts += 1

game_loop()

play_again = input("Would you like to play again? (yes or no): ").lower() #this input is asking if the user would like to play again
if play_again == "yes": #if the user chooses to play again, the loop will restart
    words = ["rhythm", "queue", "sixth", "jazz", "gym", "cryptic"] 
    word = random.choice(words)
    attempts = 0
    list_of_guessed_letters = []
    game_loop()
else:
    print("Thanks for playing!")