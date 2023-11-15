#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box b1, b2;

  initBox(&b1,3.0, 1.0, 2.0, 4.0);  
  assertEquals("ul=(3,1),w=2,h=4", boxToString(b1), "boxToString(b1)");

  initBox(&b2, 3.14159, 6.2831853071, 3.9785937, 1.624503); 
  assertEquals("ul=(3.14,6.28),w=3.98,h=1.62", boxToString(b2), "boxToString(b2)");
  assertEquals("ul=(3,6),w=4,h=2", boxToString(b2,1), "boxToString(b2,1)");
  assertEquals("ul=(3.142,6.283),w=3.979,h=1.625", boxToString(b2,4), "boxToString(b2,4)");
  assertEquals("ul=(3.1416,6.2832),w=3.9786,h=1.6245", boxToString(b2,5), "boxToString(b2,5)");

		   
  return 0;
}
