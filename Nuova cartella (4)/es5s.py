import socket 
import sys
import pickle

argv = sys.argv
porta = int(argv[1])
indirizzo = ""
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_socket.bind((indirizzo, porta))
print("attendo")
server_socket.listen(10)
conn, addr = server_socket.accept()
print("connesso")
while 1:
     rubrica_serializzata = conn.recv(4096)
     rubrica_deserializzata = pickle.loads(rubrica_serializzata)
     rubrica_deserializzata.sort()
     rubrica_serializzata = pickle.dumps(rubrica_deserializzata)
     conn.send(rubrica_serializzata)


conn.close()
server_socket.close()
