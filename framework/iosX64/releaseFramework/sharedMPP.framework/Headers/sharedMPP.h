#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SMPPKotlinThrowable, SMPPCoroutineScopePresenter, SMPPKotlinAbstractCoroutineContextElement, SMPPKotlinx_coroutines_coreCoroutineDispatcher, SMPPKotlinArray, SMPPCountry, SMPPCountryList, SMPPKotlinx_coroutines_coreCancellationException, SMPPKtor_client_coreHttpClient, SMPPKtor_client_coreHttpClientEngineConfig, SMPPKotlinx_serialization_runtimeEnumDescriptor, SMPPKotlinx_serialization_runtimeSerialKind, SMPPKotlinNothing, SMPPKotlinx_serialization_runtimeUpdateMode, SMPPKotlinException, SMPPKotlinRuntimeException, SMPPKotlinIllegalStateException, SMPPKtor_client_coreHttpClientConfig, SMPPKtor_client_coreHttpReceivePipeline, SMPPKtor_client_coreHttpRequestPipeline, SMPPKtor_client_coreHttpResponsePipeline, SMPPKtor_client_coreHttpSendPipeline, SMPPKtor_client_coreHttpResponseConfig, SMPPKotlinx_serialization_runtimeSerialClassDescImpl, SMPPKotlinEnum, SMPPKotlinx_coroutines_coreAtomicDesc, SMPPKtor_utilsAttributeKey, SMPPKtor_utilsPipelinePhase, SMPPKtor_utilsPipeline, SMPPKotlinx_ioCharset, SMPPKotlinx_coroutines_coreAtomicOp, SMPPKotlinx_ioCharsetDecoder, SMPPKotlinx_ioCharsetEncoder, SMPPKotlinx_coroutines_coreOpDescriptor;

@protocol SMPPKotlinCoroutineContext, SMPPKotlinx_coroutines_coreCoroutineScope, SMPPBaseView, SMPPUICallback, SMPPKotlinx_coroutines_coreJob, SMPPKtor_client_coreHttpClientEngine, SMPPKotlinCoroutineContextKey, SMPPKotlinCoroutineContextElement, SMPPKotlinContinuation, SMPPKotlinContinuationInterceptor, SMPPKotlinx_coroutines_coreRunnable, SMPPKotlinx_coroutines_coreDisposableHandle, SMPPKotlinx_coroutines_coreCancellableContinuation, SMPPKotlinx_coroutines_coreDelay, SMPPKotlinx_serialization_runtimeEncoder, SMPPKotlinx_serialization_runtimeSerialDescriptor, SMPPKotlinx_serialization_runtimeSerializationStrategy, SMPPKotlinx_serialization_runtimeDecoder, SMPPKotlinx_serialization_runtimeDeserializationStrategy, SMPPKotlinx_serialization_runtimeKSerializer, SMPPKotlinx_coroutines_coreChildHandle, SMPPKotlinx_coroutines_coreChildJob, SMPPKotlinSequence, SMPPKotlinx_coroutines_coreSelectClause0, SMPPKotlinx_ioCloseable, SMPPKotlinIterator, SMPPKotlinx_serialization_runtimeCompositeEncoder, SMPPKotlinx_serialization_runtimeSerialModule, SMPPKotlinAnnotation, SMPPKotlinx_serialization_runtimeCompositeDecoder, SMPPKotlinx_coroutines_coreParentJob, SMPPKotlinx_coroutines_coreSelectInstance, SMPPKotlinSuspendFunction0, SMPPKtor_utilsAttributes, SMPPKotlinx_serialization_runtimeGeneratedSerializer, SMPPKotlinx_serialization_runtimeSerialModuleCollector, SMPPKotlinKClass, SMPPKotlinComparable, SMPPKotlinSuspendFunction, SMPPKtor_client_coreHttpClientFeature, SMPPKotlinSuspendFunction2, SMPPKotlinKDeclarationContainer, SMPPKotlinKAnnotatedElement, SMPPKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wnullability"

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface SMPPMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface SMPPMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface SMPPNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface SMPPByte : SMPPNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface SMPPUByte : SMPPNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface SMPPShort : SMPPNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface SMPPUShort : SMPPNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface SMPPInt : SMPPNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface SMPPUInt : SMPPNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface SMPPLong : SMPPNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface SMPPULong : SMPPNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface SMPPFloat : SMPPNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface SMPPDouble : SMPPNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface SMPPBoolean : SMPPNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("BaseView")))
@protocol SMPPBaseView
@required
- (void)showErrorError:(SMPPKotlinThrowable *)error __attribute__((swift_name("showError(error:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SMPPKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SMPPKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("CoroutineScopePresenter")))
@interface SMPPCoroutineScopePresenter : KotlinBase <SMPPKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithMainContext:(id<SMPPKotlinCoroutineContext>)mainContext baseView:(id<SMPPBaseView>)baseView __attribute__((swift_name("init(mainContext:baseView:)"))) __attribute__((objc_designated_initializer));
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
@property (readonly) id<SMPPKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CountryPresenter")))
@interface SMPPCountryPresenter : SMPPCoroutineScopePresenter
- (instancetype)initWithContext:(id<SMPPKotlinCoroutineContext>)context uiCallback:(id<SMPPUICallback>)uiCallback __attribute__((swift_name("init(context:uiCallback:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMainContext:(id<SMPPKotlinCoroutineContext>)mainContext baseView:(id<SMPPBaseView>)baseView __attribute__((swift_name("init(mainContext:baseView:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<SMPPKotlinx_coroutines_coreJob>)getCountryListRegionName:(NSString *)regionName __attribute__((swift_name("getCountryList(regionName:)")));
- (id<SMPPKotlinx_coroutines_coreJob>)getCountryDetailCountryName:(NSString *)countryName __attribute__((swift_name("getCountryDetail(countryName:)")));
- (id<SMPPKotlinx_coroutines_coreJob>)getCountryListFromJsonRegionName:(NSString *)regionName __attribute__((swift_name("getCountryListFromJson(regionName:)")));
- (id<SMPPKotlinx_coroutines_coreJob>)getCountryDetailFromJsonCountryName:(NSString *)countryName __attribute__((swift_name("getCountryDetailFromJson(countryName:)")));
@property (readonly) id<SMPPUICallback> uiCallback __attribute__((swift_name("uiCallback")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClientEngine")))
@interface SMPPHttpClientEngine : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)httpClientEngine __attribute__((swift_name("init()")));
@property (readonly) id<SMPPKtor_client_coreHttpClientEngine> httpClientEngine __attribute__((swift_name("httpClientEngine")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SMPPKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SMPPKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SMPPKotlinCoroutineContextElement> _Nullable)getKey:(id<SMPPKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SMPPKotlinCoroutineContext>)minusKeyKey:(id<SMPPKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SMPPKotlinCoroutineContext>)plusContext:(id<SMPPKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SMPPKotlinCoroutineContextElement <SMPPKotlinCoroutineContext>
@required
@property (readonly) id<SMPPKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface SMPPKotlinAbstractCoroutineContextElement : KotlinBase <SMPPKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<SMPPKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SMPPKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol SMPPKotlinContinuationInterceptor <SMPPKotlinCoroutineContextElement>
@required
- (id<SMPPKotlinContinuation>)interceptContinuationContinuation:(id<SMPPKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<SMPPKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface SMPPKotlinx_coroutines_coreCoroutineDispatcher : SMPPKotlinAbstractCoroutineContextElement <SMPPKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<SMPPKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<SMPPKotlinCoroutineContext>)context block:(id<SMPPKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<SMPPKotlinCoroutineContext>)context block:(id<SMPPKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<SMPPKotlinContinuation>)interceptContinuationContinuation:(id<SMPPKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<SMPPKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (SMPPKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(SMPPKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher the left of `+`.")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UI")))
@interface SMPPUI : SMPPKotlinx_coroutines_coreCoroutineDispatcher
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dispatchContext:(id<SMPPKotlinCoroutineContext>)context block:(id<SMPPKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIBlocker")))
@interface SMPPUIBlocker : SMPPKotlinx_coroutines_coreCoroutineDispatcher
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dispatchContext:(id<SMPPKotlinCoroutineContext>)context block:(id<SMPPKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDelay")))
@protocol SMPPKotlinx_coroutines_coreDelay
@required
- (id<SMPPKotlinx_coroutines_coreDisposableHandle>)invokeOnTimeoutTimeMillis:(int64_t)timeMillis block:(id<SMPPKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("invokeOnTimeout(timeMillis:block:)")));
- (void)scheduleResumeAfterDelayTimeMillis:(int64_t)timeMillis continuation:(id<SMPPKotlinx_coroutines_coreCancellableContinuation>)continuation __attribute__((swift_name("scheduleResumeAfterDelay(timeMillis:continuation:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIDelay")))
@interface SMPPUIDelay : SMPPKotlinx_coroutines_coreCoroutineDispatcher <SMPPKotlinx_coroutines_coreDelay>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dispatchContext:(id<SMPPKotlinCoroutineContext>)context block:(id<SMPPKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)scheduleResumeAfterDelayTimeMillis:(int64_t)timeMillis continuation:(id<SMPPKotlinx_coroutines_coreCancellableContinuation>)continuation __attribute__((swift_name("scheduleResumeAfterDelay(timeMillis:continuation:)")));
- (id<SMPPKotlinx_coroutines_coreDisposableHandle>)invokeOnTimeoutTimeMillis:(int64_t)timeMillis block:(id<SMPPKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("invokeOnTimeout(timeMillis:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Country")))
@interface SMPPCountry : KotlinBase
- (instancetype)initWithName:(NSString * _Nullable)name nativeName:(NSString * _Nullable)nativeName cioc:(NSString * _Nullable)cioc region:(NSString * _Nullable)region numericCode:(NSString * _Nullable)numericCode callingCodes:(SMPPKotlinArray * _Nullable)callingCodes alpha3Code:(NSString * _Nullable)alpha3Code topLevelDomain:(SMPPKotlinArray * _Nullable)topLevelDomain alpha2Code:(NSString * _Nullable)alpha2Code capital:(NSString * _Nullable)capital altSpellings:(SMPPKotlinArray * _Nullable)altSpellings subregion:(NSString * _Nullable)subregion timezones:(SMPPKotlinArray * _Nullable)timezones flag:(NSString * _Nullable)flag area:(NSString * _Nullable)area latlng:(SMPPKotlinArray * _Nullable)latlng demonym:(NSString * _Nullable)demonym gini:(NSString * _Nullable)gini borders:(SMPPKotlinArray * _Nullable)borders population:(NSString * _Nullable)population __attribute__((swift_name("init(name:nativeName:cioc:region:numericCode:callingCodes:alpha3Code:topLevelDomain:alpha2Code:capital:altSpellings:subregion:timezones:flag:area:latlng:demonym:gini:borders:population:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SMPPKotlinArray * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SMPPKotlinArray * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (SMPPKotlinArray * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (SMPPKotlinArray * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (SMPPKotlinArray * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (SMPPKotlinArray * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString * _Nullable)component20 __attribute__((swift_name("component20()")));
- (SMPPCountry *)doCopyName:(NSString * _Nullable)name nativeName:(NSString * _Nullable)nativeName cioc:(NSString * _Nullable)cioc region:(NSString * _Nullable)region numericCode:(NSString * _Nullable)numericCode callingCodes:(SMPPKotlinArray * _Nullable)callingCodes alpha3Code:(NSString * _Nullable)alpha3Code topLevelDomain:(SMPPKotlinArray * _Nullable)topLevelDomain alpha2Code:(NSString * _Nullable)alpha2Code capital:(NSString * _Nullable)capital altSpellings:(SMPPKotlinArray * _Nullable)altSpellings subregion:(NSString * _Nullable)subregion timezones:(SMPPKotlinArray * _Nullable)timezones flag:(NSString * _Nullable)flag area:(NSString * _Nullable)area latlng:(SMPPKotlinArray * _Nullable)latlng demonym:(NSString * _Nullable)demonym gini:(NSString * _Nullable)gini borders:(SMPPKotlinArray * _Nullable)borders population:(NSString * _Nullable)population __attribute__((swift_name("doCopy(name:nativeName:cioc:region:numericCode:callingCodes:alpha3Code:topLevelDomain:alpha2Code:capital:altSpellings:subregion:timezones:flag:area:latlng:demonym:gini:borders:population:)")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable nativeName __attribute__((swift_name("nativeName")));
@property NSString * _Nullable cioc __attribute__((swift_name("cioc")));
@property NSString * _Nullable region __attribute__((swift_name("region")));
@property NSString * _Nullable numericCode __attribute__((swift_name("numericCode")));
@property SMPPKotlinArray * _Nullable callingCodes __attribute__((swift_name("callingCodes")));
@property NSString * _Nullable alpha3Code __attribute__((swift_name("alpha3Code")));
@property SMPPKotlinArray * _Nullable topLevelDomain __attribute__((swift_name("topLevelDomain")));
@property NSString * _Nullable alpha2Code __attribute__((swift_name("alpha2Code")));
@property NSString * _Nullable capital __attribute__((swift_name("capital")));
@property SMPPKotlinArray * _Nullable altSpellings __attribute__((swift_name("altSpellings")));
@property NSString * _Nullable subregion __attribute__((swift_name("subregion")));
@property SMPPKotlinArray * _Nullable timezones __attribute__((swift_name("timezones")));
@property NSString * _Nullable flag __attribute__((swift_name("flag")));
@property NSString * _Nullable area __attribute__((swift_name("area")));
@property SMPPKotlinArray * _Nullable latlng __attribute__((swift_name("latlng")));
@property NSString * _Nullable demonym __attribute__((swift_name("demonym")));
@property NSString * _Nullable gini __attribute__((swift_name("gini")));
@property SMPPKotlinArray * _Nullable borders __attribute__((swift_name("borders")));
@property NSString * _Nullable population __attribute__((swift_name("population")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerializationStrategy")))
@protocol SMPPKotlinx_serialization_runtimeSerializationStrategy
@required
- (void)serializeEncoder:(id<SMPPKotlinx_serialization_runtimeEncoder>)encoder obj:(id _Nullable)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<SMPPKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDeserializationStrategy")))
@protocol SMPPKotlinx_serialization_runtimeDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SMPPKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<SMPPKotlinx_serialization_runtimeDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)")));
@property (readonly) id<SMPPKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeKSerializer")))
@protocol SMPPKotlinx_serialization_runtimeKSerializer <SMPPKotlinx_serialization_runtimeSerializationStrategy, SMPPKotlinx_serialization_runtimeDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Country.CountrySerializer")))
@interface SMPPCountryCountrySerializer : KotlinBase <SMPPKotlinx_serialization_runtimeKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)countrySerializer __attribute__((swift_name("init()")));
- (SMPPCountry *)deserializeDecoder:(id<SMPPKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (SMPPCountry *)patchDecoder:(id<SMPPKotlinx_serialization_runtimeDecoder>)decoder old:(SMPPCountry *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<SMPPKotlinx_serialization_runtimeEncoder>)encoder obj:(SMPPCountry *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<SMPPKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Country.Companion")))
@interface SMPPCountryCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SMPPKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CountryService")))
@interface SMPPCountryService : KotlinBase
- (instancetype)initWithHttpClientEngine:(id<SMPPKtor_client_coreHttpClientEngine>)httpClientEngine __attribute__((swift_name("init(httpClientEngine:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CountryService.Companion")))
@interface SMPPCountryServiceCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *HOST_URL __attribute__((swift_name("HOST_URL")));
@property (readonly) NSString *REGION_ALL __attribute__((swift_name("REGION_ALL")));
@end;

__attribute__((swift_name("UICallback")))
@protocol SMPPUICallback <SMPPBaseView>
@required
- (void)countryListResponseCountryList:(NSArray<SMPPCountry *> *)countryList __attribute__((swift_name("countryListResponse(countryList:)")));
- (void)countryDetailResponseCountryDetail:(SMPPCountry *)countryDetail __attribute__((swift_name("countryDetailResponse(countryDetail:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CountryList")))
@interface SMPPCountryList : KotlinBase
- (instancetype)initWithCountryList:(NSArray<SMPPCountry *> *)countryList __attribute__((swift_name("init(countryList:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSArray<SMPPCountry *> *)component1 __attribute__((swift_name("component1()")));
- (SMPPCountryList *)doCopyCountryList:(NSArray<SMPPCountry *> *)countryList __attribute__((swift_name("doCopy(countryList:)")));
@property (readonly) NSArray<SMPPCountry *> *countryList __attribute__((swift_name("countryList")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CountryList.Companion")))
@interface SMPPCountryListCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SMPPKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface SMPPKotlinThrowable : KotlinBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SMPPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SMPPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SMPPKotlinArray *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SMPPKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol SMPPKotlinx_coroutines_coreJob <SMPPKotlinCoroutineContextElement>
@required
- (id<SMPPKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<SMPPKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(SMPPKotlinx_coroutines_coreCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (SMPPKotlinx_coroutines_coreCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<SMPPKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(SMPPKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<SMPPKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(SMPPKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<SMPPKotlinx_coroutines_coreJob>)plusOther_:(id<SMPPKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<SMPPKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<SMPPKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((swift_name("Kotlinx_ioCloseable")))
@protocol SMPPKotlinx_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol SMPPKtor_client_coreHttpClientEngine <SMPPKotlinx_coroutines_coreCoroutineScope, SMPPKotlinx_ioCloseable>
@required
- (void)installClient:(SMPPKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) SMPPKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) SMPPKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SMPPKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol SMPPKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<SMPPKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol SMPPKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol SMPPKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCancellableContinuation")))
@protocol SMPPKotlinx_coroutines_coreCancellableContinuation <SMPPKotlinContinuation>
@required
- (BOOL)cancelCause_:(SMPPKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
- (void)completeResumeToken:(id)token __attribute__((swift_name("completeResume(token:)")));
- (void)invokeOnCancellationHandler:(void (^)(SMPPKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCancellation(handler:)")));
- (void)resumeValue:(id _Nullable)value onCancellation:(void (^)(SMPPKotlinThrowable *))onCancellation __attribute__((swift_name("resume(value:onCancellation:)")));
- (id _Nullable)tryResumeValue:(id _Nullable)value idempotent:(id _Nullable)idempotent __attribute__((swift_name("tryResume(value:idempotent:)")));
- (id _Nullable)tryResumeWithExceptionException:(SMPPKotlinThrowable *)exception __attribute__((swift_name("tryResumeWithException(exception:)")));
- (void)resumeUndispatched:(SMPPKotlinx_coroutines_coreCoroutineDispatcher *)receiver value:(id _Nullable)value __attribute__((swift_name("resumeUndispatched(_:value:)")));
- (void)resumeUndispatchedWithException:(SMPPKotlinx_coroutines_coreCoroutineDispatcher *)receiver exception:(SMPPKotlinThrowable *)exception __attribute__((swift_name("resumeUndispatchedWithException(_:exception:)")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SMPPKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(SMPPInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SMPPKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeEncoder")))
@protocol SMPPKotlinx_serialization_runtimeEncoder
@required
- (id<SMPPKotlinx_serialization_runtimeCompositeEncoder>)beginCollectionDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc collectionSize:(int32_t)collectionSize typeParams:(SMPPKotlinArray *)typeParams __attribute__((swift_name("beginCollection(desc:collectionSize:typeParams:)")));
- (id<SMPPKotlinx_serialization_runtimeCompositeEncoder>)beginStructureDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc typeParams:(SMPPKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescription:(SMPPKotlinx_serialization_runtimeEnumDescriptor *)enumDescription ordinal:(int32_t)ordinal __attribute__((swift_name("encodeEnum(enumDescription:ordinal:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<SMPPKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SMPPKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<SMPPKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialDescriptor")))
@protocol SMPPKotlinx_serialization_runtimeSerialDescriptor
@required
- (NSArray<id<SMPPKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<SMPPKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) SMPPKotlinx_serialization_runtimeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDecoder")))
@protocol SMPPKotlinx_serialization_runtimeDecoder
@required
- (id<SMPPKotlinx_serialization_runtimeCompositeDecoder>)beginStructureDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc typeParams:(SMPPKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescription:(SMPPKotlinx_serialization_runtimeEnumDescriptor *)enumDescription __attribute__((swift_name("decodeEnum(enumDescription:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (SMPPKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SMPPKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SMPPKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<SMPPKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)")));
- (id _Nullable)updateSerializableValueDeserializer:(id<SMPPKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)")));
@property (readonly) id<SMPPKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) SMPPKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol SMPPKotlinx_coroutines_coreChildHandle <SMPPKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(SMPPKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol SMPPKotlinx_coroutines_coreChildJob <SMPPKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<SMPPKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinException")))
@interface SMPPKotlinException : SMPPKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SMPPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SMPPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface SMPPKotlinRuntimeException : SMPPKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SMPPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SMPPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SMPPKotlinIllegalStateException : SMPPKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SMPPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SMPPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCancellationException")))
@interface SMPPKotlinx_coroutines_coreCancellationException : SMPPKotlinIllegalStateException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SMPPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SMPPKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol SMPPKotlinSequence
@required
- (id<SMPPKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol SMPPKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<SMPPKotlinx_coroutines_coreSelectInstance>)select block:(id<SMPPKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface SMPPKtor_client_coreHttpClient : KotlinBase <SMPPKotlinx_coroutines_coreCoroutineScope, SMPPKotlinx_ioCloseable>
- (instancetype)initWithEngine:(id<SMPPKtor_client_coreHttpClientEngine>)engine userConfig:(SMPPKtor_client_coreHttpClientConfig *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (SMPPKtor_client_coreHttpClient *)configBlock:(void (^)(SMPPKtor_client_coreHttpClientConfig *))block __attribute__((swift_name("config(block:)")));
@property (readonly) id<SMPPKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<SMPPKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) SMPPKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher"))) __attribute__((unavailable("[dispatcher] is deprecated. Use coroutineContext instead.")));
@property (readonly) id<SMPPKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) SMPPKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) SMPPKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) SMPPKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) SMPPKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) SMPPKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface SMPPKtor_client_coreHttpClientEngineConfig : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property (readonly) SMPPKtor_client_coreHttpResponseConfig *response __attribute__((swift_name("response")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SMPPKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeEncoder")))
@protocol SMPPKotlinx_serialization_runtimeCompositeEncoder
@required
- (void)encodeBooleanElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(desc:index:value:)")));
- (void)encodeByteElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(desc:index:value:)")));
- (void)encodeCharElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(desc:index:value:)")));
- (void)encodeDoubleElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(desc:index:value:)")));
- (void)encodeFloatElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(desc:index:value:)")));
- (void)encodeIntElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(desc:index:value:)")));
- (void)encodeLongElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(desc:index:value:)")));
- (void)encodeNonSerializableElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(desc:index:value:)")));
- (void)encodeNullableSerializableElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index serializer:(id<SMPPKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(desc:index:serializer:value:)")));
- (void)encodeSerializableElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index serializer:(id<SMPPKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(desc:index:serializer:value:)")));
- (void)encodeShortElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(desc:index:value:)")));
- (void)encodeStringElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(desc:index:value:)")));
- (void)encodeUnitElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("encodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (BOOL)shouldEncodeElementDefaultDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(desc:index:)")));
@property (readonly) id<SMPPKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialClassDescImpl")))
@interface SMPPKotlinx_serialization_runtimeSerialClassDescImpl : KotlinBase <SMPPKotlinx_serialization_runtimeSerialDescriptor>
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<SMPPKotlinx_serialization_runtimeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer));
- (void)addElementName:(NSString *)name isOptional:(BOOL)isOptional __attribute__((swift_name("addElement(name:isOptional:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSArray<id<SMPPKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<SMPPKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
- (void)pushAnnotationA:(id<SMPPKotlinAnnotation>)a __attribute__((swift_name("pushAnnotation(a:)")));
- (void)pushClassAnnotationA:(id<SMPPKotlinAnnotation>)a __attribute__((swift_name("pushClassAnnotation(a:)")));
- (void)pushDescriptorDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("pushDescriptor(desc:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) SMPPKotlinx_serialization_runtimeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeEnumDescriptor")))
@interface SMPPKotlinx_serialization_runtimeEnumDescriptor : SMPPKotlinx_serialization_runtimeSerialClassDescImpl
- (instancetype)initWithName:(NSString *)name choices:(SMPPKotlinArray *)choices __attribute__((swift_name("init(name:choices:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<SMPPKotlinx_serialization_runtimeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) SMPPKotlinx_serialization_runtimeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModule")))
@protocol SMPPKotlinx_serialization_runtimeSerialModule
@required
- (void)dumpToCollector:(id<SMPPKotlinx_serialization_runtimeSerialModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<SMPPKotlinx_serialization_runtimeKSerializer> _Nullable)getContextualKclass:(id<SMPPKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<SMPPKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<SMPPKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<SMPPKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<SMPPKotlinKClass>)baseClass serializedClassName:(NSString *)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol SMPPKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialKind")))
@interface SMPPKotlinx_serialization_runtimeSerialKind : KotlinBase
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeDecoder")))
@protocol SMPPKotlinx_serialization_runtimeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(desc:index:)")));
- (int8_t)decodeByteElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeByteElement(desc:index:)")));
- (unichar)decodeCharElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeCharElement(desc:index:)")));
- (int32_t)decodeCollectionSizeDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("decodeCollectionSize(desc:)")));
- (double)decodeDoubleElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(desc:index:)")));
- (int32_t)decodeElementIndexDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("decodeElementIndex(desc:)")));
- (float)decodeFloatElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeFloatElement(desc:index:)")));
- (int32_t)decodeIntElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeIntElement(desc:index:)")));
- (int64_t)decodeLongElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeLongElement(desc:index:)")));
- (id _Nullable)decodeNullableSerializableElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SMPPKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(desc:index:deserializer:)")));
- (id _Nullable)decodeSerializableElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SMPPKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(desc:index:deserializer:)")));
- (int16_t)decodeShortElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeShortElement(desc:index:)")));
- (NSString *)decodeStringElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeStringElement(desc:index:)")));
- (void)decodeUnitElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (id _Nullable)updateNullableSerializableElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SMPPKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(desc:index:deserializer:old:)")));
- (id _Nullable)updateSerializableElementDesc:(id<SMPPKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SMPPKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(desc:index:deserializer:old:)")));
@property (readonly) id<SMPPKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) SMPPKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SMPPKotlinNothing : KotlinBase
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol SMPPKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface SMPPKotlinEnum : KotlinBase <SMPPKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(SMPPKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeUpdateMode")))
@interface SMPPKotlinx_serialization_runtimeUpdateMode : SMPPKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) SMPPKotlinx_serialization_runtimeUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) SMPPKotlinx_serialization_runtimeUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) SMPPKotlinx_serialization_runtimeUpdateMode *update __attribute__((swift_name("update")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(SMPPKotlinx_serialization_runtimeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol SMPPKotlinx_coroutines_coreParentJob <SMPPKotlinx_coroutines_coreJob>
@required
- (SMPPKotlinx_coroutines_coreCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol SMPPKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<SMPPKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(SMPPKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectCancellableWithExceptionException:(SMPPKotlinThrowable *)exception __attribute__((swift_name("resumeSelectCancellableWithException(exception:)")));
- (BOOL)trySelectIdempotent:(id _Nullable)idempotent __attribute__((swift_name("trySelect(idempotent:)")));
@property (readonly) id<SMPPKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinSuspendFunction")))
@protocol SMPPKotlinSuspendFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol SMPPKotlinSuspendFunction0 <SMPPKotlinSuspendFunction>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface SMPPKtor_client_coreHttpClientConfig : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SMPPKtor_client_coreHttpClientConfig *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(SMPPKtor_client_coreHttpClientEngineConfig *))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(SMPPKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installFeature:(id<SMPPKtor_client_coreHttpClientFeature>)feature configure:(void (^)(id))configure __attribute__((swift_name("install(feature:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(SMPPKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(SMPPKtor_client_coreHttpClientConfig *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol SMPPKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(SMPPKtor_utilsAttributeKey *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(SMPPKtor_utilsAttributeKey *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(SMPPKtor_utilsAttributeKey *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(SMPPKtor_utilsAttributeKey *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(SMPPKtor_utilsAttributeKey *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(SMPPKtor_utilsAttributeKey *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(SMPPKtor_utilsAttributeKey *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(SMPPKtor_utilsAttributeKey *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<SMPPKtor_utilsAttributeKey *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface SMPPKtor_utilsPipeline : KotlinBase
- (instancetype)initWithPhase:(SMPPKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SMPPKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SMPPKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(SMPPKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));
- (void)insertPhaseAfterReference:(SMPPKtor_utilsPipelinePhase *)reference phase:(SMPPKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(SMPPKtor_utilsPipelinePhase *)reference phase:(SMPPKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(SMPPKtor_utilsPipelinePhase *)phase block:(id<SMPPKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (void)mergeFrom:(SMPPKtor_utilsPipeline *)from __attribute__((swift_name("merge(from:)")));
@property (readonly) id<SMPPKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<SMPPKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface SMPPKtor_client_coreHttpReceivePipeline : SMPPKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(SMPPKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SMPPKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SMPPKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface SMPPKtor_client_coreHttpRequestPipeline : SMPPKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(SMPPKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SMPPKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SMPPKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface SMPPKtor_client_coreHttpResponsePipeline : SMPPKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(SMPPKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SMPPKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SMPPKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface SMPPKtor_client_coreHttpSendPipeline : SMPPKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(SMPPKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SMPPKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(SMPPKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponseConfig")))
@interface SMPPKtor_client_coreHttpResponseConfig : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property SMPPKotlinx_ioCharset *defaultCharset __attribute__((swift_name("defaultCharset"))) __attribute__((unavailable("Use [Charsets { responseFallbackCharset }] in [HttpClientConfig] instead.")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeGeneratedSerializer")))
@protocol SMPPKotlinx_serialization_runtimeGeneratedSerializer <SMPPKotlinx_serialization_runtimeKSerializer>
@required
- (SMPPKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModuleCollector")))
@protocol SMPPKotlinx_serialization_runtimeSerialModuleCollector
@required
- (void)contextualKClass:(id<SMPPKotlinKClass>)kClass serializer:(id<SMPPKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SMPPKotlinKClass>)baseClass actualClass:(id<SMPPKotlinKClass>)actualClass actualSerializer:(id<SMPPKotlinx_serialization_runtimeKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SMPPKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SMPPKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol SMPPKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol SMPPKotlinKClass <SMPPKotlinKDeclarationContainer, SMPPKotlinKAnnotatedElement, SMPPKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface SMPPKotlinx_coroutines_coreAtomicDesc : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(SMPPKotlinx_coroutines_coreAtomicOp *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(SMPPKotlinx_coroutines_coreAtomicOp *)op __attribute__((swift_name("prepare(op:)")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientFeature")))
@protocol SMPPKtor_client_coreHttpClientFeature
@required
- (void)installFeature:(id)feature scope:(SMPPKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) SMPPKtor_utilsAttributeKey *key __attribute__((swift_name("key")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface SMPPKtor_utilsAttributeKey : KotlinBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface SMPPKtor_utilsPipelinePhase : KotlinBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol SMPPKotlinSuspendFunction2 <SMPPKotlinSuspendFunction>
@required
@end;

__attribute__((swift_name("Kotlinx_ioCharset")))
@interface SMPPKotlinx_ioCharset : KotlinBase
- (instancetype)initWith_name:(NSString *)_name __attribute__((swift_name("init(_name:)"))) __attribute__((objc_designated_initializer));
- (SMPPKotlinx_ioCharsetDecoder *)doNewDecoder __attribute__((swift_name("doNewDecoder()")));
- (SMPPKotlinx_ioCharsetEncoder *)doNewEncoder __attribute__((swift_name("doNewEncoder()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface SMPPKotlinx_coroutines_coreOpDescriptor : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface SMPPKotlinx_coroutines_coreAtomicOp : SMPPKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(id _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(id _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
- (BOOL)tryDecideDecision:(id _Nullable)decision __attribute__((swift_name("tryDecide(decision:)")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@end;

__attribute__((swift_name("Kotlinx_ioCharsetDecoder")))
@interface SMPPKotlinx_ioCharsetDecoder : KotlinBase
- (instancetype)initWith_charset:(SMPPKotlinx_ioCharset *)_charset __attribute__((swift_name("init(_charset:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_ioCharsetEncoder")))
@interface SMPPKotlinx_ioCharsetEncoder : KotlinBase
- (instancetype)initWith_charset:(SMPPKotlinx_ioCharset *)_charset __attribute__((swift_name("init(_charset:)"))) __attribute__((objc_designated_initializer));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
