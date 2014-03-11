#ifndef BST_HPP
#define BST_HPP

#include <cstdint>

struct BSTPrivate;

/**
 * Balanced persistent binary search tree.
 */
class BST
{
public:
	BST();
	~BST();

	/**
	 * Sets the value of a node.
	 * @returns the number of currently allocated nodes.
	 */
	uint32_t set(uint32_t key, uint32_t value);

	/**
	 * @returns Sum of values in the interval [left, right].
	 */
	uint64_t sum(uint32_t time, uint32_t left, uint32_t right) const;

	/**
	 * Clears the tree at @a time from the history.
	 * @returns the number of currently allocated nodes.
	 */
	uint32_t clear(uint32_t time);
	
	/**
	 * @returns the current time.
	 */
	uint32_t now() const;

private:
	BSTPrivate *d;
};

#endif // BST_HPP
