/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObjectNSCopying, NSObject;
@interface ASKResourceRequest : NSObject {

	id<NSObject><NSCopying> _requestKey;
	id<NSObject> _cacheKey;

}

@property (nonatomic,copy) id<NSObject><NSCopying> requestKey;               //@synthesize requestKey=_requestKey - In the implementation block
@property (nonatomic,retain) id<NSObject> cacheKey;                          //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,readonly) unsigned long long cacheOptions; 
+(id)makeUniqueKey;
-(void)setCacheKey:(id<NSObject>)arg1 ;
-(id<NSObject>)cacheKey;
-(id<NSObject><NSCopying>)requestKey;
-(void)setRequestKey:(id<NSObject><NSCopying>)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(unsigned long long)cacheOptions;
-(void)didLoadResource:(id)arg1 error:(id)arg2 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)makeLoadOperation;
@end

