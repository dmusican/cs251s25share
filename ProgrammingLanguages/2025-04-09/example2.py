# Two versions of a function, one without side effects
# and one with many of them

def remove_last(lst):
    result = lst[:len(lst)-1]
    done = True
    return result

items = [1,2,3]
new_items = remove_last(items)
print(items)
print(new_items)
