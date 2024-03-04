# Borges-Diaz_PaolaFinalAssignment
CSC 242 
Paola Borges-Diaz
Comprehensive Assignment
Pseudocode 
1.	Section 1: Functions
a.	Implement a function that takes two integers as parameters and returns their sum.
i.	function add(a, b)
ii.	return a + b
b.	Develop a function that calculates the factorial of a given positive integer.
i.	function factorial(n)
ii.	return 1 if n equals 0 or n equals 1 
iii.	else n * factorial(n - 1)
c.	Use these functions to find and display the sum of factorial values for numbers 1 to 5. 
i.	function displaySumOfFactorials()
ii.	sum = 0
iii.	for i from 1 to 5
1.	sum += factorial(i)
iv.	print "Sum of factorial values for 1 to 5:", sum
2.	Section 2: Vectors and Enhanced For Loops
a.	Create a vector of integers and populate it with values 1 to 10.
i.	function createAndPopulateVector()
ii.	vector = []
iii.	for i from 1 to 10
iv.	vector.append(i)
v.	return vector
b.	Utilize an enhanced for loop to iterate through the vector and display each element.
i.	function displayVectorElements(vector)
ii.	for element in vector
iii.	print element,
iv.	print
c.	Implement a function that receives the vector as a parameter, doubles each element, and returns the modified vector.
i.	function doubleVectorElements(vector)
ii.	doubledVector = copy(vector)
iii.	for i from 1 to length(doubledVector)
iv.	doubledVector[i] *= 2
v.	return doubledVector
d.	Display the modified vector using an enhanced for loop.
i.	function displayModifiedVector(vector)
ii.	for element in vector
iii.	print element,
iv.	print
3.	Section 3: Basic Syntax
a.	Declaration and initialization of variables.
i.	function variableDeclarationAndInitialization()
ii.	x = 5
iii.	y = 3.14
iv.	ch = 'A'
v.	str = "Hello"
b.	Use of if-else statements to check if a number is even or odd.
i.	function checkEvenOrOdd(num)
ii.	print num, " is even." if num modulo 2 equals 0 else num, " is odd."
c.	Implementation of a while loop to find the sum of the first 100 natural numbers.
i.	function sumOfFirst100NaturalNumbers()sum = 0
ii.	i = 1
iii.	while i <= 100
iv.	sum += i
v.	i += 1
vi.	return sum
d.	Incorporate a switch statement to display a message based on a user-input day of the week.
i.	function displayDayMessage(day)
ii.	switch day
iii.	case 1: print "Monday"
iv.	case 2: print "Tuesday"
v.	case 3: print "Wednesday"
vi.	case 4: print "Thursday"
vii.	case 5: print "Friday"
viii.	case 6: print "Saturday"
ix.	case 7: print "Sunday"
x.	otherwise: print "Invalid day"
4.	Section 4: Integration of Concepts
a.	Take two numbers from the user and use the function from Section 1 to display their sum.
i.	function userInputAndDisplaySum()
ii.	print "Enter two numbers: "
iii.	num1 = input()
iv.	num2 = input()
v.	print "Sum:", add(num1, num2)
b.	Request user input for a positive integer, then use the functions and vector from Sections 1 and 2 to display the sum of factorial values and modified vector.
i.	function userFactorialAndVectorOperations()
ii.	print "Enter a positive integer: "
iii.	userNum = input()
1.	sumOfFactorials = 0
2.	for i from 1 to userNum
3.	sumOfFactorials += factorial(i)
4.	print "Sum of factorial values for ", userNum, ":", sumOfFactorials
5.	userVector = createAndPopulateVector()
6.	modifiedUserVector = doubleVectorElements(userVector)
7.	print "Modified Vector: "
8.	displayModifiedVector(modifiedUserVector)
c.	Utilize basic syntax concepts from Section 3 to perform a simple mathematical operation (e.g., multiplication) on the sum obtained in Section 4a.
i.	function performMathematicalOperation(sum)
ii.	multiplier = 3
iii.	result = sum * multiplier
iv.	print "Result of multiplication:", result
5.	Main Program
a.	Section 1:
i.	(a)
1.	sumResult = add(3, 7)
2.	print "Sum Result:", sumResult
ii.	(b)
1.	factorialResult = factorial(5)
2.	print "Factorial Result:", factorialResult
iii.	(c)
1.	displaySumOfFactorials()
b.	Section 2:
i.	(a) 
1.	myVector = createAndPopulateVector()
ii.	(b)
1.	print "Vector Elements: "
2.	displayVectorElements(myVector)
iii.	(c)
1.	doubledVector = doubleVectorElements(myVector)
iv.	(d)
1.	print "Modified Vector: "
2.	displayModifiedVector(doubledVector)
c.	Section 3:
i.	(a)
1.	variableDeclarationAndInitialization()
ii.	(b)
1.	checkEvenOrOdd(8)
iii.	(c)
1.	sumOfFirst100 = sumOfFirst100NaturalNumbers()
2.	print "Sum of first 100 natural numbers:", sumOfFirst100
iv.	(d)
1.	displayDayMessage(3)
d.	Section 4:
i.	(a)
1.	userInputAndDisplaySum()
ii.	(b)
1.	userFactorialAndVectorOperations()
iii.	(c)
1.	performMathematicalOperation
