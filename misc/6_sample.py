#Assigns a string to x. 
x = "There are %d types of people." % 10 

#Assigns two string variables. 
binary = "binary" 
do_not = "don't" 

#Assigns a string to y. 
y = "Those who know %s and those who %s." %(binary, do_not) 

#Prints x and y. 
print x 
print y 

#Prints two strings and uses newer values of x and y. 
print "I said: %r." % x
print "I also said: '%s'." % y

#Shows how to use % with a variable. 
hilarious = False
joke_evaluation = "Isn't that joke so funny?! %r" 

print joke_evaluation % hilarious

#Concatenates two random strings. 
w = "This is the left side of..." 
e = "a string with a right side." 

print w + e
