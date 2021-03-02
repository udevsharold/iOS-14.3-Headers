/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/EMMailboxChangeAction.h>

@class EMMailboxObjectID;

@interface EMMoveMailboxChangeAction : EMMailboxChangeAction {

	EMMailboxObjectID* _parentMailboxID;

}

@property (nonatomic,copy,readonly) EMMailboxObjectID * parentMailboxID;              //@synthesize parentMailboxID=_parentMailboxID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithMailboxObjectID:(id)arg1 newParentMailboxID:(id)arg2 ;
-(id)initWithMailbox:(id)arg1 newParent:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(EMMailboxObjectID *)parentMailboxID;
-(void)encodeWithCoder:(id)arg1 ;
@end
