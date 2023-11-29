import socket 
import sys

def trova_vocali_consonanti(stringa):
    vocali = "aeiouAEIOU"
    conteggio_vocali = 0
    conteggio_consonanti = 0

    for carattere in stringa:
            if carattere in vocali:
                conteggio_vocali += 1
            else:
                conteggio_consonanti += 1
    return conteggio_vocali, conteggio_consonanti

argv = sys.argv
porta = int(argv[1])
indirizzo = ""
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_socket.bind((indirizzo, porta))
server_socket.listen(10)
while 1:
        client_socket, client_address = server_socket.accept()
        stringa = client_socket.recv(1024).decode()
        voc, cons = trova_vocali_consonanti(stringa) 
        stringa = "vocali " + str(voc) + " consonanti " + str(cons)
        client_socket.send(stringa.encode())




     


