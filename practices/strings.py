name = input("What is your name: ").strip().title()

print("Hello", name + "!")

sentence = "The quick brown fox jumps over the lazy dog."

print(sentence)

word = input("Tell me a word from the sentence: ")

new_word = input("Give me a new word: ")

start = sentence.find(word)

length = len(word)

print(sentence.replace(word, new_word))

#print(sentence[start:start+length])