from sys import argv

script, first, second, third = argv

script = raw_input("What do you want to see on screen?") 
first = raw_input("Write your name.")
second = raw_input("Now your second name: ")
third = raw_input("And now your family name: ")

print "The script is called:", script
print "Your first variable is:", first
print "Your second variable is:", second
print "Your third variable is:", third 
