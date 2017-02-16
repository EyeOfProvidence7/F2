/* recognizeExp.h, Gerard Renardel, 29 January 2014 */

#ifndef RECOGNIZEEXP_H
#define RECOGNIZEEXP_H

int acceptNumber(List *lp);
int acceptIdentifier(List *lp);
int acceptCharacter(List *lp, char c);
int acceptExpression(List *lp);
void recognizeExpressions();

#endif
