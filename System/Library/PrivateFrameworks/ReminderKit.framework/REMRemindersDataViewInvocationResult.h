/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocationResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface REMRemindersDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding> {

	NSArray* _accountStorages;
	NSArray* _listStorages;
	NSArray* _reminderStorages;
	NSArray* _objectIDs;

}

@property (nonatomic,readonly) NSArray * accountStorages;               //@synthesize accountStorages=_accountStorages - In the implementation block
@property (nonatomic,readonly) NSArray * listStorages;                  //@synthesize listStorages=_listStorages - In the implementation block
@property (nonatomic,readonly) NSArray * reminderStorages;              //@synthesize reminderStorages=_reminderStorages - In the implementation block
@property (nonatomic,readonly) NSArray * objectIDs;                     //@synthesize objectIDs=_objectIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)objectIDs;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)accountStorages;
-(id)initWithAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 objectIDs:(id)arg4 ;
-(NSArray *)reminderStorages;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)listStorages;
@end
