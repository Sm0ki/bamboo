#pragma once

// System
#define DECIMAL_SCALE_FACTOR 10000
#define TIMEOUT_MS 5000
#define TIMEOUT_SUBMIT_MS 45000
#define BLOCKS_PER_FETCH 200
#define BLOCK_HEADERS_PER_FETCH 2000

// Files
#define GENESIS_FILE_PATH "./genesis.json"
#define LEDGER_FILE_PATH "./data/ledger"
#define TXDB_FILE_PATH "./data/txdb"
#define BLOCK_STORE_FILE_PATH "./data/blocks"

// Blocks
#define MAX_TRANSACTIONS_PER_BLOCK 10000
#define DIFFICULTY_RESET_FREQUENCY 1000

// Difficulty
#define DESIRED_BLOCK_TIME_SEC 30
#define MIN_DIFFICULTY 16
#define MAX_DIFFICULTY 256

