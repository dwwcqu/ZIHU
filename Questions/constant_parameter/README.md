# GPU 内核程序如何使用没有经过 Memcpy 的数据？

GPU 内核程序会使用一些非指针/数组参数，这些数据没有用 Memcpy 进行 Host 到 Device 拷贝，GPU 是如何获得这部分 Host 数据，以便于在内核中使用？例如：图中的 `numElements` 在进行内核 Kernel 之前，是没有经过 `cudaMemcpy()` 操作，而是直接使用 Host 数据进行内核的 Launch，那么 GPU 是如何获得这本属于 Host 的数据呢？