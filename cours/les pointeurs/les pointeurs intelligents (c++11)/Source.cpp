#include <iostream>
#include <memory>
void suppress(double *sp);

int main(){
    /* -------------le type unique_ptr------------- */
    std::unique_ptr<int> upi(new int (60)); //initialisation avec un pointeur natif (new int (60))
    std::cout << *upi << std::endl;

    std::unique_ptr<int> makePtr (std::make_unique<int> (5)); //initialisation sans passer par un pointeur natif
    std::cout << *makePtr << std::endl;
    *makePtr = 10;
    std::cout << *makePtr << std::endl;
    std::cout << makePtr.get() << std::endl;
    makePtr = nullptr; //detruit le pointeur

    if (makePtr)
    {
        std::cout << "makePtr existe encore" << std::endl;
    }
    else
    {
        std::cout << "makePtr a ete detruit" << std::endl;
    }
    /* -------------le type shared_ptr------------- */

    std::shared_ptr<int> sharedPtr (std::make_shared<int>(120));
    std::cout << sharedPtr.use_count() << std::endl;
    std::shared_ptr<int> sharedPtr2 (sharedPtr);
    std::cout << sharedPtr.use_count() << std::endl;
    std::cout << sharedPtr2.get() << " " << sharedPtr.get() << std::endl;
    std::cout << *sharedPtr2 << std::endl;

    /* -------------les suppresseurs------------- */
    
    std::shared_ptr<double> ads (new double(10), suppress) ;
}

void suppress(double *sp){
    std::cout << "appel suppress - valeur = " << *sp << std::endl;
    delete sp;
}