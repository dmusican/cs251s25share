class Thing:
    def __init__(self):
        self.x = 5

def foo(x):
    x = 6

def moo(t):
   t.x = 6;
   t = Thing()
   t.x = 7

def main():
   a = 5
   foo(a)
   print(a)

   b = Thing()
   b.x = 6
   moo(b)
   print(b.x)

main()
