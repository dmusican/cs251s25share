def remove_last(lst):
    result = lst[:len(lst)-1]
    done = True
    return result

count = 0
def remove_last_again(lst):
    global count
    count += 1
    lst.pop()
    print("working")
    done = True
    return None

