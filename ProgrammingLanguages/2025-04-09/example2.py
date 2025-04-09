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

# Another version with lots of side effects
# (when viewed globally)
count = 0
def remove_last_again(lst):
    global count
    count += 1    # side effect
    lst.pop()    # side effect, changes the object
    print("working")   # side effect
    done = True
    return None

items = [5,6,7]
print(count)
print(items)
remove_last_again(items)
print(count)
print(items)
