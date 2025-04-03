import numpy as np

# Function to generate random matrix with non-negative integers
def generate_random_matrix(order):
    return np.random.randint(0, 10, size=(order, order))

# Generating matrices of order 4, 6, 8, and 10
matrix_4 = generate_random_matrix(4)
matrix_6 = generate_random_matrix(6)
matrix_8 = generate_random_matrix(8)
matrix_10 = generate_random_matrix(10)

# Function to print matrix without outer brackets
def print_matrix(matrix):
    for row in matrix:
        print(" ".join(map(str, row)))

# Printing matrices without outer brackets
print("Matrix of Order 4:")
print_matrix(matrix_4)
print("\nMatrix of Order 6:")
print_matrix(matrix_6)
print("\nMatrix of Order 8:")
print_matrix(matrix_8)
print("\nMatrix of Order 10:")
print_matrix(matrix_10)
