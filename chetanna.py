# This program helps you acquire vocabulary in a foreign language.
#
# The new words that you collect from your reading and listening 
# are stored in a text file. 
#
# Each line in the text file has a target language word and its
# base language translation. The word and its translation are 
# separated by a comma.
#
# For example,
#
# образование, education
# выматывающие тренировки, exhausting practice
# забавные истории, funny anecdotes
#
# When the program is run, the words in your target or base
# language are displayed in a random order to make retrieval 
# harder. 
# 
# On selecting target language, you might see 
# 
# 3. выматывающие тренировки
# 2. забавные истории
# 1. образование
# 
# Your job is to translate those words
#  
# HOW TO USE?
#
# CHANGES IN THE CODE 
#
# 1. Replace "/home/chetan/Documents/Languages/vocabulary/" with the
#    path where you have stored your vocabulary text files.
# 
# USAGE
# 1. Run python3 copy.py
# 2. Enter the name of the text file that you want to revise.
# 3. Hit ENTER.
# 4. Select "target" or "base" and ENTER.
# 
# The words (either in target or base language) in your text file 
# will be displayed in a random order.

from time import sleep 
from random import randint
from datetime import datetime

vocabulary = []
file = input ("Enter the file name: ")
directory = "/home/chetan/Documents/Languages/vocabulary/"
path = directory + file
targetbase = int(input ("Enter '1' for base and '0' for target language list of words. "))

f = open (path, 'r')
for line in f:
  currentline = line.split (",")
  vocabulary.append (currentline[targetbase])

vocab_to_learn = vocabulary.copy()

for i in vocabulary:
  review_word = randint (0, (len(vocab_to_learn)-1))
  print (len(vocab_to_learn), vocab_to_learn[review_word])
  vocab_to_learn.pop (review_word)
  sleep (1)

fx = open ("log", 'a+')
message = "\nYou revised " + file + " on " + str(datetime.today())
fx.write(message)
fx.close()
