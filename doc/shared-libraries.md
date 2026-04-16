Shared Libraries
================

## deuteriumcoinconsensus

The purpose of this library is to make the verification functionality that is critical to Deuteriumcoin's consensus available to other applications, e.g. to language bindings.

### API

The interface is defined in the C header `deuteriumcoinconsensus.h` located in  `src/script/deuteriumcoinconsensus.h`.

#### Version

`deuteriumcoinconsensus_version` returns an `unsigned int` with the API version *(currently at an experimental `0`)*.

#### Script Validation

`deuteriumcoinconsensus_verify_script` returns an `int` with the status of the verification. It will be `1` if the input script correctly spends the previous output `scriptPubKey`.

##### Parameters
- `const unsigned char *scriptPubKey` - The previous output script that encumbers spending.
- `unsigned int scriptPubKeyLen` - The number of bytes for the `scriptPubKey`.
- `const unsigned char *txTo` - The transaction with the input that is spending the previous output.
- `unsigned int txToLen` - The number of bytes for the `txTo`.
- `unsigned int nIn` - The index of the input in `txTo` that spends the `scriptPubKey`.
- `unsigned int flags` - The script validation flags *(see below)*.
- `deuteriumcoinconsensus_error* err` - Will have the error/success code for the operation *(see below)*.

##### Script Flags
- `deuteriumcoinconsensus_SCRIPT_FLAGS_VERIFY_NONE`
- `deuteriumcoinconsensus_SCRIPT_FLAGS_VERIFY_P2SH` - Evaluate P2SH ([BIP16](https://github.com/deuteriumcoin/bips/blob/master/bip-0016.mediawiki)) subscripts
- `deuteriumcoinconsensus_SCRIPT_FLAGS_VERIFY_DERSIG` - Enforce strict DER ([BIP66](https://github.com/deuteriumcoin/bips/blob/master/bip-0066.mediawiki)) compliance

##### Errors
- `deuteriumcoinconsensus_ERR_OK` - No errors with input parameters *(see the return value of `deuteriumcoinconsensus_verify_script` for the verification status)*
- `deuteriumcoinconsensus_ERR_TX_INDEX` - An invalid index for `txTo`
- `deuteriumcoinconsensus_ERR_TX_SIZE_MISMATCH` - `txToLen` did not match with the size of `txTo`
- `deuteriumcoinconsensus_ERR_DESERIALIZE` - An error deserializing `txTo`

### Example Implementations
- [NDeuteriumcoin](https://github.com/NicolasDorier/NDeuteriumcoin/blob/master/NDeuteriumcoin/Script.cs#L814) (.NET Bindings)
- [node-libdeuteriumcoinconsensus](https://github.com/bitpay/node-libdeuteriumcoinconsensus) (Node.js Bindings)
- [java-libdeuteriumcoinconsensus](https://github.com/dexX7/java-libdeuteriumcoinconsensus) (Java Bindings)
- [deuteriumcoinconsensus-php](https://github.com/Bit-Wasp/deuteriumcoinconsensus-php) (PHP Bindings)
