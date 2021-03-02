/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>
#import <libobjc.A.dylib/FCAssetKeyManagerType.h>

@protocol FCAssetKeyServiceType, FCAssetKeyCacheType, FCAssetKeyManagerDelegate, FCOperationThrottler;
@class FCThreadSafeMutableSet, FCThreadSafeMutableDictionary, NSString;

@interface FCAssetKeyManager : NSObject <FCOperationThrottlerDelegate, FCAssetKeyManagerType> {

	id<FCAssetKeyServiceType> _service;
	id<FCAssetKeyCacheType> _cache;
	id<FCAssetKeyManagerDelegate> _delegate;
	id<FCOperationThrottler> _throttler;
	FCThreadSafeMutableSet* _pendingWrappingKeyIDs;
	FCThreadSafeMutableDictionary* _errorsByKey;

}

@property (nonatomic,readonly) id<FCAssetKeyServiceType> service;                           //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) id<FCAssetKeyCacheType> cache;                               //@synthesize cache=_cache - In the implementation block
@property (nonatomic,__weak,readonly) id<FCAssetKeyManagerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<FCOperationThrottler> throttler;                          //@synthesize throttler=_throttler - In the implementation block
@property (nonatomic,readonly) FCThreadSafeMutableSet * pendingWrappingKeyIDs;              //@synthesize pendingWrappingKeyIDs=_pendingWrappingKeyIDs - In the implementation block
@property (nonatomic,readonly) FCThreadSafeMutableDictionary * errorsByKey;                 //@synthesize errorsByKey=_errorsByKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(id<FCAssetKeyCacheType>)cache;
-(id<FCAssetKeyServiceType>)service;
-(id<FCOperationThrottler>)throttler;
-(void)eraseAllKeys;
-(id)initWithService:(id)arg1 cache:(id)arg2 delegate:(id)arg3 ;
-(void)clearUnauthorizedAssetKeys;
-(id)cachedWrappingKeyWithID:(id)arg1 ;
-(BOOL)_canRetryAfterNetworkError:(id)arg1 ;
-(FCThreadSafeMutableDictionary *)errorsByKey;
-(FCThreadSafeMutableSet *)pendingWrappingKeyIDs;
-(void)fetchWrappingKeyWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<FCAssetKeyManagerDelegate>)delegate;
@end
