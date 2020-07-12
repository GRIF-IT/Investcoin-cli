// Copyright (c) 2018-2020, The Investcoin Project, GRIF-IT

#pragma once

#include <Wallet/WalletGreen.h>

bool fusionTX(CryptoNote::WalletGreen &wallet, 
              CryptoNote::TransactionParameters p);

bool optimize(CryptoNote::WalletGreen &wallet, uint64_t threshold);

void fullOptimize(CryptoNote::WalletGreen &wallet);

size_t makeFusionTransaction(CryptoNote::WalletGreen &wallet, 
                             uint64_t threshold);