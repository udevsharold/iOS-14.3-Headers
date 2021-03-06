/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSUUID;

@interface DMFBeginTransactionResultObject : CATTaskResultObject {

	NSUUID* _UUID;

}

@property (nonatomic,copy,readonly) NSUUID * UUID;              //@synthesize UUID=_UUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithUUID:(id)arg1 ;
-(NSUUID *)UUID;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
@end

