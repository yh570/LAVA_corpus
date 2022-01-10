This is the code for a toy program that accompanies the blog post, "The
Mechanics of Bug Injection with LAVA":

http://moyix.blogspot.com/2016/07/the-mechanics-of-bug-injection-with-lava.html

This archive contains the following:

    - unmodified: the unmodified source code we will inject bugs into
    - queries:    the same code, with PANDA taint queries added
    - buggy:      407 modified copies of the program, each with one bug
                  inserted
    - inputs:     the original and triggering inputs to the program.
                  Triggering inputs have "fuzzed" in the name.
    - inputs.txt: a text file indicating the triggering input for each
                  modified program
    - yield.txt:  a text file indicating whether each modified program's
                  injected bug was deemed to really be a bug
    - map.txt:    the same information as in the inputs.txt and
                  yield.txt, but all in one line per program/input
