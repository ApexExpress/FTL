import socket
import threading

class SocketServer:
    def __init__(self, host, port):
        self.host = host
        self.port = port
        self.server_socket = None
        self.client_threads = []

    def start(self):
        self.server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.server_socket.bind((self.host, self.port))
        self.server_socket.listen(5)
        print(f"Server listening on {self.host}:{self.port}...")

        while True:
            client_socket, client_address = self.server_socket.accept()
            client_thread = threading.Thread(target=self.handle_client, args=(client_socket,))
            client_thread.start()
            self.client_threads.append(client_thread)

    def handle_client(self, client_socket):
        while True:
            data = client_socket.recv(1024)
            if not data:
                break
            # Handle the received data
            response = self.process_data(data)
            client_socket.send(response)

        client_socket.close()

    def process_data(self, data):
        # Process the received data and generate a response
        # You can implement your own logic here
        response = b"Response from server: " + data
        return response

    def stop(self):
        for client_thread in self.client_threads:
            client_thread.join()

        self.server_socket.close()
        print("Server stopped.")

# Example usage
if __name__ == '__main__':
    server = SocketServer('localhost', 8080)
    server.start()
