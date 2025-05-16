"""Correctness parser for S-expression grammar.  
Globals used to reduce parameter passing and
to keep code brief for paper.
"""

import sys

def tokenize(lexemes):
    global tokens
    # Make a copy of lexemes
    # (don't just point tokens at it)
    tokens = list(lexemes)
    for i in range(len(tokens)):
        if tokens[i] not in ["(" , ")" ,
                             "'" , None]:
            tokens[i] = 'atom'

def nextToken():
    """Grab the next token if able to do so."""
    global token
    if len(tokens)>0:
        token = tokens.pop(0)
    else:
        token = None

def match(expected):
    """Match the current token against the expected
    value. If successful, grab the next token."""
    if token==expected:
        nextToken()
    else:
        raise Exception('Parse error',
                        token, expected)






def P():
    if token in ['atom' , "'" , '(']:
        E()
    else:
        raise Exception('Parse error')

def E():
    if token == 'atom':
        match('atom')
    elif token == "'":
        match("'")
        E()
    elif token == "(":
        match("(")
        E()
        Es()
        match(")")
    else:
        raise Exception('Parse error')

def Es():
    if token in ['atom' , "'" , '(']:
        E()
        Es()
    elif token == ")":
        pass

if __name__=='__main__':
    """Open up the file, grab the program,
    and parse it."""
    file = open(sys.argv[1],'r')
    data = file.read()
    file.close()
    lexemes = data.split()
    tokenize(lexemes)
    print(tokens)
    token = tokens.pop(0)
    P()
    print("Success")
