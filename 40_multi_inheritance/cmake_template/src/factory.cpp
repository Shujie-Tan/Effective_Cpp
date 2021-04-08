#include <iperson.h>
#include <memory>

std::shared_ptr<IPerson> makePerson(DatabaseID personIdentifier);

DataBaseID askUserForDatabaseID();

DataBaseID id(askUserForDatabaseID());
std::shared_ptr<IPerson> pp(makePerson(id));
