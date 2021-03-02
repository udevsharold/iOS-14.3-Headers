/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TICryptographing.h>

@protocol OS_dispatch_queue;
@class NSData, NSObject, NSString;

@interface TICryptographer : NSObject <TICryptographing> {

	NSData* _deviceSalt;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _cachedRecipientName;
	NSString* _cachedRecipientDigest;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) NSData * deviceSalt; 
@property (nonatomic,copy) NSString * cachedRecipientName;                              //@synthesize cachedRecipientName=_cachedRecipientName - In the implementation block
@property (nonatomic,copy) NSString * cachedRecipientDigest;                            //@synthesize cachedRecipientDigest=_cachedRecipientDigest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)singletonInstance;
+(id)sharedCryptographer;
+(void)setSharedCryptographer:(id)arg1 ;
-(void)setCachedRecipientDigest:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(NSData *)deviceSalt;
-(void)setCachedRecipientName:(NSString *)arg1 ;
-(NSString *)cachedRecipientName;
-(NSString *)cachedRecipientDigest;
-(id)stringDigestForName:(id)arg1 ;
@end
