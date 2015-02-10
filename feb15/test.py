import math as m
def wow(x):
	sum = 0
	for i in range(1, x+1):
		sum += i*(m.factorial(i) + x)

	return sum

print wow(1)
print wow(2)
print wow(3)
print wow(4)
