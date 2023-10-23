#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // for exit()
#define MAX_EXPR_SIZE 50
#define MAX_STACK_SIZE 30

char pexpr[MAX_EXPR_SIZE];
int stack[MAX_STACK_SIZE];
int top;

int delete_stack();
void add_stack(int data);
int is_operator(char c);
int cal(void);

void main() {
	printf("input the expression as a postfix notation: ");
	gets(pexpr); // Consider replacing gets() with fgets() for safer code.
	printf("Evaluation Value: %d\n", cal());
}

int delete_stack() {
	int data;
	if (top == -1) {
		printf("Stack is empty\n");
		exit(1);
	}
	data = stack[top];
	top--;
	return data;
}

void add_stack(int data) {
	if (top >= MAX_STACK_SIZE - 1) {
		printf("Stack is full.\n");
		exit(1);
	}

	++top;
	stack[top] = data;
}

int is_operator(char c) {
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return 1;
	else
		return 0;
}

int cal(void) {
	char symbol;
	int op1, op2, n = 0;

	top = -1;

	symbol = pexpr[n++];
	while (symbol != '\0') {
		if (is_operator(symbol)) {
			op2 = delete_stack();
			op1 = delete_stack();

			switch (symbol) {
			case '+':
				add_stack(op1 + op2);
				break;
			case '-':
				add_stack(op1 - op2);
				break;
			case '*':
				add_stack(op1 * op2);
				break;
			case '/':
				add_stack(op1 / op2);
				break;
			}
		}
		else if (symbol >= '0' && symbol <= '9') { // Check if it's a digit
			add_stack(symbol - '0');
		}

		symbol = pexpr[n++];
	}
	return delete_stack();
}
