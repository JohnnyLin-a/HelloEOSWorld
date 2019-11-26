#include <eosiolib/eosio.hpp>
#include <eosiolib/print.hpp>

using namespace eosio;

class hello : public contract {
   public:
      using contrac::contract;

      [[eosio::action]]
      void hi( name user ) {
         print( "hello, ", user);
      }
};

EOSIO_DISPATCH( hello, (hi))