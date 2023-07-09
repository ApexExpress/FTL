import re

# Regular expressions for tokenizing the input expression
token_patterns = [
    (r'\d+', 'NUMBER'),
    (r'\+', 'PLUS'),
    (r'\-', 'MINUS'),
    (r'\*', 'MULTIPLY'),
    (r'\/', 'DIVIDE'),
    (r'\(', 'LPAREN'),
    (r'\)', 'RPAREN'),
    (r'\s+', None),  # Ignore whitespace
]

def tokenize(expression):
    tokens = []
    expression = expression.strip()
    while expression:
        for pattern, token_type in token_patterns:
            match = re.match(pattern, expression)
            if match:
                value = match.group(0)
                if token_type:
                    tokens.append((token_type, value))
                expression = expression[match.end():].strip()
                break
        else:
            raise ValueError('Invalid expression')
    return tokens

def parse_expression(tokens):
    # Recursive descent parsing
    def parse_term():
        token_type, value = tokens.pop(0)
        if token_type == 'NUMBER':
            return f'mov eax, {value}'
        elif token_type == 'LPAREN':
            expr = parse_expression(tokens)
            assert tokens.pop(0)[0] == 'RPAREN'
            return expr
        else:
            raise ValueError('Invalid expression')

    def parse_factor():
        expr = parse_term()
        while tokens and tokens[0][0] in ('MULTIPLY', 'DIVIDE'):
            token_type, value = tokens.pop(0)
            term = parse_term()
            if token_type == 'MULTIPLY':
                expr += f'\nmul eax, {term}'
            else:
                expr += f'\ndiv eax, {term}'
        return expr

    expr = parse_factor()
    while tokens and tokens[0][0] in ('PLUS', 'MINUS'):
        token_type, value = tokens.pop(0)
        factor = parse_factor()
        if token_type == 'PLUS':
            expr += f'\nadd eax, {factor}'
        else:
            expr += f'\nsub eax, {factor}'
    return expr

def compile_expression(expression):
    tokens = tokenize(expression)
    assembly_code = parse_expression(tokens)
    assembly_code += '\nret'
    return assembly_code

# Example usage
expression = '5 + (2 - 3) * 4'
assembly_code = compile_expression(expression)
print(assembly_code)
