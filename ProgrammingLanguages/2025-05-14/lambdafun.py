adder = lambda x: x +1
print(adder(5))

# Sorting example
items = [('horse', 9), ('cow', 3),
         ('zebra', 0)]
print(sorted(items))

print(sorted(items, key=lambda animal: animal[1]))

# Make a new list as a results of adding 1 to each
# item in a given list

# boring way
items = [9, 2, 1, 3, 5]
new_items = items.copy()
for i in range(len(new_items)):
    new_items[i] += 1
print(new_items)
