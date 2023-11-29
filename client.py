import socket
import sys

argv = sys.argv
HOST = argv[1]
PORT = int(argv[2])
stringa = argv[3]
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client_socket.connect((HOST, PORT))
client_socket.send(stringa.encode())
stringa = client_socket.recv(1024).decode()
print(stringa)
client_socket.close()




