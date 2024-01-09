![# Project Name C - Binary Trees ## Table of Contents -  Task 0 New node (#task-0-new-node) -  Task 1 Insert left (#task-1-insert-left) -  Task 2 Insert right (#task-2-insert-right) -  Task 3 Delet](https://github.com/chloe0524/holbertonschool-binary_trees/assets/127857895/06883a71-e56e-4c63-950a-3ac7ccdc0a3d)

# Project Name: C - Binary Trees
*by Chloe & Yassine*

## :open_file_folder: Table of Contents

| Tasks (1-9)                               | Tasks (10-18)                              |
| ----------------------------------------- | ----------------------------------------- |
| [Task 0: New node]([#https://github.com/chloe0524/holbertonschool-binary_trees/blob/main/0-binary_tree_node.c)       | [Task 10: Depth](#task-10-depth)           |
| [Task 1: Insert left](#task-1-insert-left) | [Task 11: Size](#task-11-size)             |
| [Task 2: Insert right](#task-2-insert-right)| [Task 12: Leaves](#task-12-leaves)         |
| [Task 3: Delete](#task-3-delete)           | [Task 13: Nodes](#task-13-nodes)           |
| [Task 4: Is leaf](#task-4-is-leaf)         | [Task 14: Balance factor](#task-14-balance-factor) |
| [Task 5: Is root](#task-5-is-root)         | [Task 15: Is full](#task-15-is-full) |
| [Task 6: Pre-order traversal](#task-6-pre-order-traversal) | [Task 16: Is perfect](#task-16-is-perfect) |
| [Task 7: In-order traversal](#task-7-in-order-traversal)   | [Task 17: Sibling](#task-17-sibling) |
| [Task 9: Height](#task-9-height)          | [Task 18: Uncle](#task-18-uncle)  |
|                                           |                                           |


## :pushpin: Tasks (mandatory)

### Task 0: New node
Write a function that creates a binary tree node.

- **Prototype:** `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
- Where `parent` is a pointer to the parent node of the node to create.
- `value` is the value to put in the new node.
- When created, a node does not have any child.
- Your function must return a pointer to the new node, or NULL on failure.

### Task 1: Insert left
Write a function that inserts a node as the left-child of another node.

- **Prototype:** `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
- Where `parent` is a pointer to the node to insert the left-child in.
- `value` is the value to store in the new node.
- Your function must return a pointer to the created node, or NULL on failure or if `parent` is NULL.
- If `parent` already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

### Task 2: Insert right
Write a function that inserts a node as the right-child of another node.

- **Prototype:** `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
- Where `parent` is a pointer to the node to insert the right-child in.
- `value` is the value to store in the new node.
- Your function must return a pointer to the created node, or NULL on failure or if `parent` is NULL.
- If `parent` already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

### Task 3: Delete
Write a function that deletes an entire binary tree.

- **Prototype:** `void binary_tree_delete(binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to delete.
- If `tree` is NULL, do nothing.

### Task 4: Is leaf
Write a function that checks if a node is a leaf.

- **Prototype:** `int binary_tree_is_leaf(const binary_tree_t *node);`
- Where `node` is a pointer to the node to check.
- Your function must return 1 if `node` is a leaf, otherwise 0.
- If `node` is NULL, return 0.

### Task 5: Is root
Write a function that checks if a given node is a root.

- **Prototype:** `int binary_tree_is_root(const binary_tree_t *node);`
- Where `node` is a pointer to the node to check.
- Your function must return 1 if `node` is a root, otherwise 0.
- If `node` is NULL, return 0.

### Task 6: Pre-order traversal
Write a function that goes through a binary tree using pre-order traversal.

- **Prototype:** `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`
- Where `tree` is a pointer to the root node of the tree to traverse.
- `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
- If `tree` or `func` is NULL, do nothing.

### Task 7: In-order traversal
Write a function that goes through a binary tree using in-order traversal.

- **Prototype:** `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`
- Where `tree` is a pointer to the root node of the tree to traverse.
- `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
- If `tree` or `func` is NULL, do nothing.

### Task 8: Post-order traversal
Write a function that goes through a binary tree using post-order traversal.

- **Prototype:** `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`
- Where `tree` is a pointer to the root node of the tree to traverse.
- `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
- If `tree` or `func` is NULL, do nothing.

### Task 9: Height
Write a function that measures the height of a binary tree.

- **Prototype:** `size_t binary_tree_height(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to measure the height.
- If `tree` is NULL, your function must return 0.

### Task 10: Depth
Write a function that measures the depth of a node in a binary tree.

- **Prototype:** `size_t binary_tree_depth(const binary_tree_t *tree);`
- Where `tree` is a pointer to the node to measure the depth.
- If `tree` is NULL, your function must return 0.

### Task 11: Size
Write a function that measures the size of a binary tree.

- **Prototype:** `size_t binary_tree_size(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to measure the size.
- If `tree` is NULL, the function must return 0.
### Task 12: Leaves
Write a function that counts the leaves in a binary tree.

- **Prototype:** `size_t binary_tree_leaves(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to count the number of leaves.
- If `tree` is NULL, the function must return 0.
- A NULL pointer is not a leaf.

### Task 13: Nodes
Write a function that counts the nodes with at least 1 child in a binary tree.

- **Prototype:** `size_t binary_tree_nodes(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to count the number of nodes.
- If `tree` is NULL, the function must return 0.
- A NULL pointer is not a node.

### Task 14: Balance factor
Write a function that measures the balance factor of a binary tree.

- **Prototype:** `int binary_tree_balance(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to measure the balance factor.
- If `tree` is NULL, return 0.

### Task 15: Is full
Write a function that checks if a binary tree is full.

- **Prototype:** `int binary_tree_is_full(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to check.
- If `tree` is NULL, your function must return 0.

### Task 16: Is perfect
Write a function that checks if a binary tree is perfect.

- **Prototype:** `int binary_tree_is_perfect(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to check.
- If `tree` is NULL, your function must return 0.

### Task 17: Sibling
Write a function that finds the sibling of a node.

- **Prototype:** `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`
- Where `node` is a pointer to the node to find the sibling.
- Your function must return a pointer to the sibling node.
- If `node` is NULL or the parent is NULL, return NULL.
- If `node` has no sibling, return NULL.

### Task 18: Uncle
Write a function that finds the uncle of a node.

- **Prototype:** `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`
- Where `node` is a pointer to the node to find the uncle.
- Your function must return a pointer to the uncle node.
- If `node` is NULL, return NULL.
- If `node` has no uncle, return NULL.
