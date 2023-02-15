class Mahasiswa:
    __name = ""
    __nim = ""
    __prodigy = ""
    __faculty = ""
    
    def __init__(self, name = "", NIM = "", prodigy = "", faculty = ""):
        self.__name = name
        self.__nim = NIM
        self.__prodigy = prodigy
        self.__faculty = faculty
        
    def get_name(self):
        return self.__name
    
    def set_name(self, name):
        self.__name = name
        
    def get_nim(self):
        return self.__nim
    
    def set_nim(self, NIM):
        self.__nim = NIM
    
    def get_prodigy(self):
        return self.__prodigy
    
    def set_prodigy(self, prodigy):
        self.__prodigy = prodigy
    
    def get_faculty(self):
        return self.__faculty
    
    def set_faculty(self, faculty):
        self.__faculty = faculty
    