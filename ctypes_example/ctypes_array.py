import ctypes

lib = ctypes.CDLL("clibrary.so")

lib.read_list(10)
