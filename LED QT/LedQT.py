import serial, time
import sys
from PyQt5 import QtWidgets,uic

arduino = serial.Serial('COM4',9600)
time.sleep(2)

qtCreatorFile = 'LEDQT.ui' #ruta donde esta estar la interfas UI
Ui_MainWindow,QtBaseClass = uic.loadUiType(qtCreatorFile)
class Formulario(QtWidgets.QMainWindow):
    def __init__(self,parent = None):
        super(Formulario, self).__init__(parent)
        uic.loadUi('LEDQT.ui',self) #ruta donde esta estar la interfas UI
        self.btnLed01.clicked.connect(self.foco1)
        self.btnLed02.clicked.connect(self.foco2)
        self.btnLed03.clicked.connect(self.foco3)
        self.btnLed04.clicked.connect(self.foco4)
        self.btnLed05.clicked.connect(self.foco5)
        self.btnLed06.clicked.connect(self.foco6)
        self.btnLed07.clicked.connect(self.foco7)
        self.btnLed08.clicked.connect(self.foco8)
        self.btnLed09.clicked.connect(self.foco9)
        self.btnLed10.clicked.connect(self.foco10)
        self.btnLed11.clicked.connect(self.foco11)
        self.btnLed12.clicked.connect(self.foco12)
        
        self.show() #Muestra la ventana    
    
    
    def foco1(self):
        arduino.write('a'.encode())
    def foco2(self):
        arduino.write('b'.encode())
    def foco3(self):
        arduino.write('c'.encode())
    def foco4(self):
        arduino.write('d'.encode())
    def foco5(self):
        arduino.write('e'.encode())
    def foco6(self):
        arduino.write('f'.encode())
    def foco7(self):
        arduino.write('g'.encode())
    def foco8(self):
        arduino.write('h'.encode())
    def foco9(self):
        arduino.write('i'.encode())
    def foco10(self):
        arduino.write('j'.encode())
    def foco11(self):
        arduino.write('k'.encode())
    def foco12(self):
        arduino.write('l'.encode())
    
if __name__=='__main__':
    app = QtWidgets.QApplication(sys.argv)
    window = Formulario()
    app.exec()