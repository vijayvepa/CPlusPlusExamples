# Ch1 Up and Running

- Run [Setup on Ubuntu](./setup-ubuntu.sh)

## Hello World
- Run [Build](./HelloWorld/build.sh)
- Debug [Build](./HelloWorld/debug.sh) 

## Comparison
- Run [Build](./Comparison/build.sh) 

## StepFunction
- Run [Build](./StepFunction/build.sh) 

## Debugging with gdb

- Set breakpoints

```sh
(gdb) break main.cpp:5
(gdb) break main

```

- Start Execution

```sh
(gdb) run
```

- Step Into

```sh
(gdb) step
```

- Step Out
```sh
(gdb) finish
```

- Step Over
```sh
(gdb) next
```

- Evaluate variables

```sh
(gdb) info locals
```

- Continue until next breakpoint

```sh
(gdb) continue
```

- Exit

```sh
quit
```
