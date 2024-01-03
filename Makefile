PROGS := bbexample

.PHONY: all
all: $(PROGS)

.PHONY: clean
clean:
	$(RM) $(CXX_OBJS) $(PROGS)

first : bbexample.c 
	gcc bbexample.c -o bbexample
