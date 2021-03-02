/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFScheduleOSUpdateRequest : DMFTaskRequest {

	BOOL _useDelay;
	unsigned long long _action;
	NSString* _productKey;
	NSString* _productVersion;

}

@property (assign,nonatomic) unsigned long long action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * productKey;                    //@synthesize productKey=_productKey - In the implementation block
@property (nonatomic,copy) NSString * productVersion;                //@synthesize productVersion=_productVersion - In the implementation block
@property (assign,nonatomic) BOOL useDelay;                          //@synthesize useDelay=_useDelay - In the implementation block
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)_descriptionForAction:(unsigned long long)arg1 ;
+(BOOL)_action:(unsigned long long*)arg1 fromString:(id)arg2 ;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(Class)whitelistedClassForResultObject;
-(NSString *)productVersion;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)setAction:(unsigned long long)arg1 ;
-(id)description;
-(void)setProductVersion:(NSString *)arg1 ;
-(BOOL)useDelay;
-(unsigned long long)action;
-(void)setUseDelay:(BOOL)arg1 ;
-(NSString *)productKey;
-(void)setProductKey:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
