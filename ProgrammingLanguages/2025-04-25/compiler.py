inpfile = open('myprog.greet', 'r')
outfile = open('myprog.bash', 'w')

for line in inpfile:
    (command, number) = line.split()
