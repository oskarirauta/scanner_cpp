SCANNER_DIR?=scanner
INCLUDES += -I./$(SCANNER_DIR)/include
SCANNER_OBJS:= \
	objs/scanner_scan.o

objs/scanner_scan.o: $(SCANNER_DIR)/src/scanner.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c -o $@ $<;
