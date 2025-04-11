# container_example.py

class Container:
    pass

w1 = Container()
w2 = Container()
w1.value = 1
w2 = w1
print(w1.value, w2.value)
w2.value = 2
print(w1.value, w2.value)
