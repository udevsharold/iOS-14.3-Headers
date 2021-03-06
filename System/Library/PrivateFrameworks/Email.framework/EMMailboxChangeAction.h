/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class EMMailboxObjectID;

@interface EMMailboxChangeAction : NSObject <NSSecureCoding> {

	EMMailboxObjectID* _mailboxObjectID;

}

@property (nonatomic,copy,readonly) EMMailboxObjectID * mailboxObjectID;              //@synthesize mailboxObjectID=_mailboxObjectID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMailbox:(id)arg1 ;
-(id)initWithMailboxObjectID:(id)arg1 ;
-(EMMailboxObjectID *)mailboxObjectID;
-(void)encodeWithCoder:(id)arg1 ;
@end

