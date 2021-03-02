/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface OTOperationConfiguration : NSObject <NSSecureCoding> {

	BOOL _discretionaryNetwork;
	BOOL _useCachedAccountStatus;
	unsigned long long _timeoutWaitForCKAccount;
	long long _qualityOfService;

}

@property (assign,nonatomic) unsigned long long timeoutWaitForCKAccount;              //@synthesize timeoutWaitForCKAccount=_timeoutWaitForCKAccount - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                              //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) BOOL discretionaryNetwork;                               //@synthesize discretionaryNetwork=_discretionaryNetwork - In the implementation block
@property (assign,nonatomic) BOOL useCachedAccountStatus;                             //@synthesize useCachedAccountStatus=_useCachedAccountStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(unsigned long long)timeoutWaitForCKAccount;
-(BOOL)discretionaryNetwork;
-(void)setTimeoutWaitForCKAccount:(unsigned long long)arg1 ;
-(void)setDiscretionaryNetwork:(BOOL)arg1 ;
-(BOOL)useCachedAccountStatus;
-(void)setUseCachedAccountStatus:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(long long)qualityOfService;
-(void)encodeWithCoder:(id)arg1 ;
@end
