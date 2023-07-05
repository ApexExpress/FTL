import numpy as np

# Create a complex matrix
matrix = np.array([[1 + 2j, 2 - 1j], [3j, 4]])

# Accessing elements of the complex matrix
print(matrix[0, 0])  # Access the element at row 0, column 0
print(matrix[1, 1])  # Access the element at row 1, column 1

# Perform operations on the complex matrix
conjugate = np.conjugate(matrix)  # Compute the complex conjugate of the matrix
transpose = np.transpose(matrix)  # Compute the transpose of the matrix
hermitian = np.conjugate(np.transpose(matrix))  # Compute the Hermitian (conjugate transpose) of the matrix

# Perform matrix multiplication
vector = np.array([1 + 1j, 2 - 1j])  # Create a complex vector
result = np.dot(matrix, vector)  # Perform matrix-vector multiplication

# Print the results
print("Complex matrix:")
print(matrix)
print("\nComplex conjugate:")
print(conjugate)
print("\nTranspose:")
print(transpose)
print("\nHermitian (Conjugate transpose):")
print(hermitian)
print("\nMatrix-vector multiplication result:")
print(result)
