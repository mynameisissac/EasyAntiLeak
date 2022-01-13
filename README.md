# EasyAntiLeak
Very simple tool that help you trace with memory leak in C++ program.

* Use the program or share with others by the zipped folder under `release`.
* `result.log` store the record of dynamic allocation and deallocation in runtime.

## Current support restriction:
- Require GNU Make
- Normal formatting coding
- Support tail dynamic allocation (i.e. `return new type`)
- Haven't support any loop (for-loop/while-loop/do-while-loop)
- Does not ignore comments
