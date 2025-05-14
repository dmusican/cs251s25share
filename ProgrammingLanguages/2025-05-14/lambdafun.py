adder = lambda x: x +1
print(adder(5))

# Sorting example
items = [('horse', 9), ('cow', 3),
         ('zebra', 0)]
print(sorted(items))

print(sorted(items, key=lambda animal: animal[1]))
