all: test

test: main.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $<

clean:
	$(RM) test
