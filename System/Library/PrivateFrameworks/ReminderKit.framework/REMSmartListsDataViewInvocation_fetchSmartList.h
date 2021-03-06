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

@class NSString, NSArray;

@interface REMSmartListsDataViewInvocation_fetchSmartList : REMStoreInvocation <NSSecureCoding> {

	BOOL _createIfNeeded;
	NSString* _smartListTag;
	NSArray* _reminderIDs;

}

@property (nonatomic,readonly) NSString * smartListTag;              //@synthesize smartListTag=_smartListTag - In the implementation block
@property (nonatomic,readonly) NSArray * reminderIDs;                //@synthesize reminderIDs=_reminderIDs - In the implementation block
@property (assign,nonatomic) BOOL createIfNeeded;                    //@synthesize createIfNeeded=_createIfNeeded - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)smartListTag;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSmartListTag:(id)arg1 reminderIDs:(id)arg2 createIfNeeded:(BOOL)arg3 ;
-(NSArray *)reminderIDs;
-(BOOL)createIfNeeded;
-(void)setCreateIfNeeded:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

