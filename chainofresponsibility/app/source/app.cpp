#include "Card.h"
#include "Cash.h"
#include "Transfer.h"
#include "Cheque.h"

int main()
{
    Cash myCash;
    Card myCard;
    Transfer myTransfer;
    Cheque myCheque;

    myCash.setNextPayMethod(&myCard);
    myCard.setNextPayMethod(&myTransfer);
    myTransfer.setNextPayMethod(&myCheque);

    myCash.Pay(Method::cash);
    myCash.Pay(Method::card);
    myCash.Pay(Method::transfer);
    myCash.Pay(Method::cheque);

    return 0;
}