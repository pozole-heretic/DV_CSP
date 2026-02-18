#DV & HM P7 team_game.py hangman

import random #(Danny): this imports the random module into the code for it to use, so the code can choose a random word

words = ["rhythm", "queue", "sixth", "jazz", "gym", "cryptic", "abyss", "xylophone", "gypsy", "mnemonic", "buck", "avenue", "injury", "awkward"] #(Danny):this sets a list of words for the computer to choose from

word = random.choice(words) #(Danny):this randomly chooses one word from the list above to use for the game

attempts = 0 #(Danny):this variable is so the computer knows how many times the user has tried to guess a letter, it also sets it to 0 every time the user runs the code so they have the fair amount of tries

def hangman(): #(Danny):this is a function so the game loop can acess it every time by just reading 'hangman()'
    if attempts == 0: #(Hailey): this hangman function checks how many times the user has guessed a letter and prints a hangman image depending on that number. since the code just started, it prints just a blank noose
        print('''
---------
|       |
|
|
|
|_________''')
    elif attempts == 1: #(Hailey): since attempts = 1, it now prints a head
        print('''
---------
|       |
|       O
|
|
|_________''')

    elif attempts == 2: #(Hailey): since attempts = 2, it now prints a head and a body
        print('''
---------
|       |
|       O
|       |
|
|_________''')
    elif attempts == 3: #(Hailey): since attempts = 3, it now prints a head, body, and legs
        print('''
---------
|       |
|       O
|       |
|      / \\
|_________''')
    elif attempts == 4: #(Hailey): since attempts = 4, it now prints the full body, meaning that the user lost
        print('''
---------
|       |
|       O
|      /|\\
|      / \\
|_________''')

list_of_guessed_letters = [] #(Danny):this variable is blank because the user inputs will fill this list with letters with their guesses. the code can access this list to print either blank spots, or the letters the user guessed

def game_loop(): #(Danny):this is a function because after the user wins or loses, it can access this whole loop again depending if they want to play again or not
    global attempts #(Danny):attempts is set to global because if it was inside the loop it would be local, and since it's a loop, it would resets attempts to 0 every single time, so it's global on the outside so the number does change if the user guesses wrong
    while True: #(Danny):while true loops last forever, so the loop runs every single time and asks the same question to the user
        display_words = "" #(Danny):this is currently blank because it depends on what the user guesses, if the user guesses a correct letter, it prints the letter instead a blank spot, along with other blank spots
        for letter in word: #(Danny):it compares the letters in the word to the letter that the user guessed
            if letter in list_of_guessed_letters: #(Danny):it checks if the letter the user guessed is in the word or not
                display_words += letter #(Danny):it prints the letter the user guessed instead of a blank spot if the user guessed a letter right, it would now show the correctly guessed letter possibly along with other blank spots or other correctly guessed letters, adds the letter to the blank display_words variable
            else: #(Danny):this is the conditional for if the letter the user guessed is not in the word
                display_words += "_" #(Danny):this prints blank spots because the user guessed wrong, it keeps the user guessing, it adds the blank spots to the empty display_words variable

        print(display_words) #(Danny):it now prints the display words now that it has the info it needed, either blank spots or the correctly guessed letters

        hangman() #(Danny):accesses the hangman function, it's a function so it's easier to fit in the loop

        if display_words == word: #(Danny):since display_words adds letters over time, it would check if the display_words is the same as the word the user needs to guess, if all the blank spots are filled it would preform this action, if not, it would go to else
            print("Congratulations! You won the game!") #(Danny):it tells the user they won since display_words == word
            break #(Danny):it breaks the loop so the user won't be asked any more questions, it would just end the game
        elif attempts == 4: #(Danny):since the display_words are not the same as the word, it checks if the attempts are 4, because that's the limit, if it is, it preforms the following:
            print("You lost the game! The man was hung! The word was", word) #(Danny):since attempts do = 0, it tells the user they lost and tells them the word they needed to guess
            break #(Danny):it breaks the loop so the user can't keep trying to guess after they lost
        elif attempts < 4: #(Danny):it checks if attempts are less than 0 if the above elif and if statements are false, because 4 is the losing number, anything less than 4 is still valid for the user to keep guessing
            guess = input("What do you think one of the letters in the word is?: ").lower() #(Danny):now it gives the user the ability to guess the word, and the .lower() is so the user can type any letter, uppercase or lowercase because it would just lowercase it anyway so it matches the lowercase of the chosen word because if it was uppercase, it wouldn't match the words since they don't have uppercase letters, so lowercase is so it works

        list_of_guessed_letters.append(guess) #(Danny):it adds the guessed letter to the blank list, therfore giving the code the list to check if the letter is in the word, giving it access to the letter the user guessed
        if guess not in word: #(Danny):it's a conditional that checks if the guessed letter was not in the word, if it's true, it preforms the following:
            attempts += 1 #(Danny):it adds 1 to attempts since the user guessed wrong, and it gives the hangman loop an instruction to preform depending on the attempts (what hangman to print) and whether the user loses depending on the the number of attempts

game_loop() #(Danny):since the above code is all the definition for game_loop(), it finally actually preforms this, it's a variable so the code runner can access it again in case the user wants to play again

play_again = input("Would you like to play again? (yes or no): ").lower() #(Danny):this input is asking if the user would like to play again
if play_again == "yes": #(Danny):if the user chooses to play again (which the code checks whether is it yes or no), the loop will restart
    words = ["rhythm", "queue", "sixth", "jazz", "gym", "cryptic"] #(Danny):these variables are here to reset the game and reset the variables
    word = random.choice(words) #(Danny):this chooses another random word from the list above
    attempts = 0 #(Danny):this resets the attempts to 0 because if it didn't, the user would immedietly lose
    list_of_guessed_letters = [] #(Danny):this resets the display words to blank spots so the user doesn't know what the word is
    game_loop() #(Danny):accesses the function again so the game can run again
else: #(Danny):the code does not need to check if the input is no because there are only 2 options, so it doesn't matter what the user says other than yes
    print("Thanks for playing!") #(Hailey): the end of the whole code!