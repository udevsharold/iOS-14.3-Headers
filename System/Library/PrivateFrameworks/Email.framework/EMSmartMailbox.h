/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/EMMailbox.h>

@class EMMailboxScope;

@interface EMSmartMailbox : EMMailbox {

	/*^block*/id _predicateGenerator;
	EMMailboxScope* _mailboxScope;
	long long _smartMailboxType;

}

@property (nonatomic,readonly) EMMailboxScope * mailboxScope;              //@synthesize mailboxScope=_mailboxScope - In the implementation block
@property (nonatomic,readonly) long long smartMailboxType;                 //@synthesize smartMailboxType=_smartMailboxType - In the implementation block
+(id)unifiedMailboxOfType:(long long)arg1 name:(id)arg2 additionalPredicate:(id)arg3 ;
+(id)vipMailboxWithMailboxScope:(id)arg1 ;
+(id)flaggedMailboxWithMailboxScope:(id)arg1 ;
+(id)orangeMailboxWithMailboxScope:(id)arg1 ;
+(id)redMailboxWithMailboxScope:(id)arg1 ;
+(id)purpleMailboxWithMailboxScope:(id)arg1 ;
+(id)blueMailboxWithMailboxScope:(id)arg1 ;
+(id)yellowMailboxWithMailboxScope:(id)arg1 ;
+(id)unifiedMailboxOfType:(long long)arg1 name:(id)arg2 ;
+(id)greenMailboxWithMailboxScope:(id)arg1 ;
+(id)grayMailboxWithMailboxScope:(id)arg1 ;
+(id)unreadMailboxWithMailboxScope:(id)arg1 ;
+(id)hasAttachmentsMailboxWithMailboxScope:(id)arg1 ;
+(id)notifyThreadsMailboxWithMailboxScope:(id)arg1 ;
+(id)todayMailboxWithMailboxScope:(id)arg1 ;
+(id)muteThreadsMailboxWithMailboxScope:(id)arg1 ;
+(id)includesMeMailboxWithMailboxScope:(id)arg1 ;
+(id)vipMailboxWithName:(id)arg1 additionalPredicate:(id)arg2 ;
-(BOOL)isSmartMailbox;
-(unsigned long long)hash;
-(EMMailboxScope *)mailboxScope;
-(long long)smartMailboxType;
-(id)initWithType:(long long)arg1 mailboxType:(long long)arg2 name:(id)arg3 mailboxScope:(id)arg4 predicateGenerator:(/*^block*/id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)supportsSelectAll;
-(BOOL)_shouldArchiveByDefault;
-(id)makePredicate;
@end

