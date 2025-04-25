inpfile = open('myprog.greet', 'r')
outfile = open('myprog.bash', 'w')

for line in inpfile:
    (command, number) = line.split()
    outfile.write('for i in {' + number + '}\n')
    outfile.write('do\n')
    outfile.write('    echo "' + command + '"\n')
    outfile.write('done\n')
inpfile.close()
outfile.close()
