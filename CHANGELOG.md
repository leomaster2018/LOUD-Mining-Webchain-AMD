# v2.7.3-beta
- [#145](https://github.com/xmrig/xmrig-amd/issues/145) Added runtime linking with OpenCL ICD, **AMD APP SDK not required anymore**.
- [#140](https://github.com/xmrig/xmrig-amd/issues/140) `cryptonight-lite/ipbc` replaced to `cryptonight-heavy/tube` for **Bittube (TUBE)**.
- [#128](https://github.com/xmrig/xmrig-amd/issues/128) Improved `cryptonight/msr` support, removed usage restrictions.
- Added `cryptonight/rto` (cryptonight variant 1 with IPBC/TUBE mod) variant for **Arto (RTO)** coin.
- Added `cryptonight/xao` (original cryptonight with bigger iteration count) variant for **Alloy (XAO)** coin.
- Added option `opencl-loader` for custom path to OpenCL ICD.
- Vega APU (AMD Ryzen with embedded GPU) now excluded from autoconfig, reason: slow and cause BSOD.

# v2.7.2-beta
- [#132](https://github.com/xmrig/xmrig-amd/issues/132) Fixed regression, command line option `--opencl-platform` was broken.

# v2.7.1-beta
- [#130](https://github.com/xmrig/xmrig-amd/issues/130) **Added OpenCL cache support**.
  - Added config option `cache` and command line option `--no-cache` to allow disable cache.
- **Added support for new cryptonight-heavy variant xhv** (`cn-heavy/xhv`) for Haven Protocol fork.
- [#128](https://github.com/xmrig/xmrig-amd/issues/128) **Added support for new cryptonight variant msr** (`cn/msr`) also known as `cryptonight-fast` for Masari fork.
- [#126](https://github.com/xmrig/xmrig-amd/issues/126) Fixed regression, command line option `--print-platforms` was broken.
- [#127](https://github.com/xmrig/xmrig-amd/issues/127) Fixed regression, miner was not exit if OpenCL errors happen.

# v2.7.0-beta
- **Added support for cryptonight-lite variant ipbc** (`cn-lite/ipbc`) for BitTube also was known as IPBC.
- **Added support for cryptonight variant xtl** (`cn/xtl`) for Stellite.
- Added [config options](https://github.com/xmrig/xmrig-amd/blob/dev/doc/THREADS.md) `strided_index`, `mem_chunk` and `comp_mode`.
- Added new detailed hashrate report.
- Added command line option `--dry-run`.

# v2.6.1
- Fixed critical bug, in some cases miner was can't recovery connection and switch to failover pool, version 2.5.2 and v2.6.0-beta1 affected.
- [#499](https://github.com/xmrig/xmrig/issues/499) IPv6 support disabled for internal HTTP API.
- Added workaround for nicehash.com if you use `cryptonightv7.<region>.nicehash.com` option `variant=1` will be set automatically.

# v2.6.0-beta1
 - [#476](https://github.com/xmrig/xmrig/issues/476) **Added Cryptonight-Heavy support for Sumokoin ASIC resistance fork.**
 
# v2.5.2
- [#448](https://github.com/xmrig/xmrig/issues/478) Fixed broken reconnect.

# v2.5.1
- [#454](https://github.com/xmrig/xmrig/issues/454) Fixed build with libmicrohttpd version below v0.9.35.
- [#456](https://github.com/xmrig/xmrig/issues/459) Verbose errors related to donation pool was not fully silenced.
- [#459](https://github.com/xmrig/xmrig/issues/459) Fixed regression (version 2.5.0 affected) with connection to **xmr.f2pool.com**.

# v2.5.0
- [#434](https://github.com/xmrig/xmrig/issues/434) **Added support for Monero v7 PoW, scheduled on April 6.**
- Added full IPv6 support.
- Added protocol extension, when use the miner with xmrig-proxy 2.5+ no more need manually specify `nicehash` option.
- [#51](https://github.com/xmrig/xmrig-amd/issues/51) Fixed multiple pools in initial config was saved incorrectly.
- [#123](https://github.com/xmrig/xmrig-proxy/issues/123) Fixed regression (all versions since 2.4 affected) fragmented responses from pool/proxy was parsed incorrectly.

# v2.4.5
 - [#49](https://github.com/xmrig/xmrig-amd/issues/49) Fixed, in some cases, pause was cause an infinite loop.
 - [#200](https://github.com/xmrig/xmrig/issues/200) In some cases miner was doesn't write log to stdout.
 - Added libmicrohttpd version to --version output.
 - Fixed bug in singal handler, in some cases miner wasn't shutdown properly.
 - Fixed recent MSVC 2017 version detection.

# v2.4.3-beta2
 - Fixed, auto config wasn't write opencl-platform to config.json.
 - Added command line option `--print-platforms`.
 - Fixed 32 bit build.
 - [#2](https://github.com/xmrig/xmrig-amd/issues/2) Fixed Linux build.
 - [#3](https://github.com/xmrig/xmrig-amd/issues/3) Fixed macOS build.

# v2.4.3-beta1
 - First public release.
