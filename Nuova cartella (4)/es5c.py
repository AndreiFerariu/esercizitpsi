import socket 
import sys
import pickle

def lettura_file(nome_file_rubrica):
    array = []
    with open(nome_file_rubrica, 'r') as file:
        for riga in file:
            array.append(riga)

    return array

def scrittura_file(nome_file_newrubrica, rubrica):
    array = []
    with open(nome_file_newrubrica, 'w') as file:
        file.write(rubrica)
            




argv = sys.argv
porta = int(argv[2])
nome_file_rubrica = argv[3]
nome_file_newRubrica = argv[4]
indirizzo = argv[1]
rubrica = []
rubrica = lettura_file(nome_file_rubrica, rubrica)
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client_socket.connect((indirizzo, porta))
print("connessione in corso")
conn, addr = client_socket.accept()
print("connesso")
rubrica_serializzata = pickle.dumps(rubrica)
conn.send(rubrica_serializzata)
rubrica_serializzata = conn.recv(4096)
rubrica_deserializzata = pickle.loads(rubrica_serializzata)
scrittura_file(nome_file_newRubrica,rubrica_deserializzata)

conn.close()
client_socket.close()
     
     
