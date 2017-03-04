/* this program allows input of a graph and then
 * traverses the graph depth first. It does this
 * by declaring a stack. Which has the top most
 * element as the completely un explored node of
 * the graph. Depth first uses recursive call of
 * the depth first function. Every time a node is
 * encountered it will see if all the adjacent
 * nodes of that node is visited or not. If all the
 * adjacent nodes are visited then this current node
 * is removed from the stack, else the first unvisited
 * adjacent node is visited by calling the function*/
#include <iostream>
