# KnowMyCountry-iOS-Multi-platform

KnowMyCountry-iOS project uses multi-platform framework. 

Open defect about ["Support multi-threaded coroutines on Kotlin/Native(iOS)"](https://github.com/Kotlin/kotlinx.coroutines/issues/462). There is runtime exception thrown "InvalidMutabilityException: mutation attempt of frozen kotlinx.atomicfu.AtomicRef" when access the Ktor client's get method to make a request for countries list.
Temporary fix: Do not use HttpClientEngine while creating object of HttpClient. 
