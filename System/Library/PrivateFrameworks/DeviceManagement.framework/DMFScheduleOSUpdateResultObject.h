/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSString, NSError;

@interface DMFScheduleOSUpdateResultObject : CATTaskResultObject {

	unsigned long long _action;
	NSString* _productKey;
	NSError* _error;

}

@property (nonatomic,readonly) unsigned long long action;               //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * productKey;              //@synthesize productKey=_productKey - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                    //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSError *)error;
-(id)initWithAction:(unsigned long long)arg1 productKey:(id)arg2 error:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)action;
-(NSString *)productKey;
-(void)encodeWithCoder:(id)arg1 ;
@end

