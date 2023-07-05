from qiskit import QuantumCircuit, execute, Aer

# Define the sender's quantum circuit
def sender_circuit(message):
    circuit = QuantumCircuit(1, 1)
    if message == '1':
        circuit.x(0)  # Flip the qubit to '1' state
    circuit.h(0)  # Apply a Hadamard gate
    return circuit

# Define the receiver's quantum circuit
def receiver_circuit(received_qubit):
    circuit = QuantumCircuit(1, 1)
    circuit.h(0)  # Apply a Hadamard gate
    circuit.measure(0, 0)  # Measure the qubit
    return circuit

# Simulate quantum communication
def simulate_quantum_communication(message):
    # Sender prepares the qubit
    sender_circ = sender_circuit(message)

    # Simulate quantum channel (noiseless)
    backend = Aer.get_backend('qasm_simulator')
    job = execute(sender_circ, backend, shots=1)
    sent_qubit = job.result().get_statevector(sender_circ)

    # Receiver receives and measures the qubit
    receiver_circ = receiver_circuit(sent_qubit)
    job = execute(receiver_circ, backend, shots=1)
    received_bit = int(list(job.result().get_counts(receiver_circ).keys())[0])

    return received_bit

# Example usage
message = '0'  # Set the message to be transmitted ('0' or '1')
received_bit = simulate_quantum_communication(message)
print("Received Bit:", received_bit)
