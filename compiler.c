import re

# Token types
INTEGER = 'INTEGER'
PLUS = 'PLUS'
MINUS = 'MINUS'
EOF = 'EOF'

class Token:
    def __init__(self, type, value):
        self.type = type
        self.value = value

    def __str__(self):
        return 'Token({type}, {value})'.format(type=self.type, value=self.value)

    def __repr__(self):
        return self.__str__()

class Lexer:
    def __init__(self, text):
        self.text = text
        self.pos = 0

    def error(self):
        raise Exception('Invalid character')

    def get_next_token(self):
        if self.pos >= len(self.text):
            return Token(EOF, None)

        current_char = self.text[self.pos]

        if re.match(r'\d', current_char):
            self.pos += 1
            return Token(INTEGER, int(current_char))

        if current_char == '+':
            self.pos += 1
            return Token(PLUS, current_char)

        if current_char == '-':
            self.pos += 1
            return Token(MINUS, current_char)

        self.error()

class AST:
    pass

class Integer(AST):
    def __init__(self, value):
        self.value = value

class BinOp(AST):
    def __init__(self, left, op, right):
        self.left = left
        self.op = op
        self.right = right

class Parser:
    def __init__(self, lexer):
        self.lexer = lexer
        self.current_token = self.lexer.get_next_token()

    def error(self):
        raise Exception('Invalid syntax')

    def eat(self, token_type):
        if self.current_token.type == token_type:
            self.current_token = self.lexer.get_next_token()
        else:
            self.error()

    def factor(self):
        token = self.current_token
        if token.type == INTEGER:
            self.eat(INTEGER)
            return Integer(token.value)
        elif token.type == PLUS:
            self.eat(PLUS)
            return self.factor()
        elif token.type == MINUS:
            self.eat(MINUS)
            return BinOp(Integer(0), '-', self.factor())

    def term(self):
        node = self.factor()

        while self.current_token.type in (PLUS, MINUS):
            token = self.current_token
            if token.type == PLUS:
                self.eat(PLUS)
            elif token.type == MINUS:
                self.eat(MINUS)

            node = BinOp(node, token.value, self.factor())

        return node

    def parse(self):
        return self.term()

class Interpreter:
    def __init__(self, parser):
        self.parser = parser

    def visit(self, node):
        if isinstance(node, Integer):
            return node.value
        elif isinstance(node, BinOp):
            if node.op == '+':
                return self.visit(node.left) + self.visit(node.right)
            elif node.op == '-':
                return self.visit(node.left) - self.visit(node.right)

    def interpret(self):
        ast = self.parser.parse()
        return self.visit(ast)

def main():
    while True:
        try:
            text = input('>>> ')
        except EOFError:
            break

        if not text:
            continue

        lexer = Lexer(text)
        parser = Parser(lexer)
        interpreter = Interpreter(parser)
        result = interpreter.interpret()
        print(result)

if __name__ == '__main__':
    main()
