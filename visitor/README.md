# Build and Run
```bash
cd {project}
bazel run //:object_oriented_approach
bazel run //:classic_visitor
bazel run //:variant_visitor 
```

# object oriented approach

## pros:
- you can easily add new types without recompiling existing code
- fulfills OCP (open closed principle)

## good software design?
Imagine half a year later, we need a serialize function...
![alt text](./assets/object_oriented_approach.png)


## cons:
- shape interface can not extend easily with new operations
- if you add a new operation, all classes have to implement it
- strong dependency to a gui library - what if you just want to use a Circle for geometric calculation?


## book - Guideline 15: 
- Prefer an object oriented solution, when you primarily want to add types
- Prefer a procedural / functional solution when you primarily want to add operations


# Solution - classic visitor 
![alt text](./assets/classic_visitor.png)

# pros
- add new operations easily (ocp)

# cons 
- adding a new Serialize class - you have to implement it for all types
- what about return types - store it in the class and access it later
- adding new types - implement all operations for all ShapeVisitors
- cyclic dependency - forward declaration
- resolve 2 virtual functions - decrease performance


# Solution - std::variant c++17

![alt text](./assets/variant_visitor.png)

## pros: 
- add new operations easily (ocp)
- no cyclic dependency
- no Shape baseclass
- value types - no pointers

## cons:
- adding new types - implement all operations for all ShapeVisitors



# Performance:
![alt text](./assets/performance.png)

  


