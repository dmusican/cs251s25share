inpfile = open('myprog.greet', 'r')

for line in inpfile:
    (command, number) = line.split()
    for i in range(int(number)):
        print(command)

inpfile.close()
