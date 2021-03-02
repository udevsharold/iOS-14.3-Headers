/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface REMAccountsDataViewInvocation_fetchAll : REMStoreInvocation <NSSecureCoding> {

	long long _purpose;

}

@property (nonatomic,readonly) long long purpose;              //@synthesize purpose=_purpose - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)purpose;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPurpose:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
