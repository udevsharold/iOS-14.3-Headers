/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface NNMKMailboxSelectionChanges : NSObject {

	NSArray* _mailboxesToUpdate;
	NSArray* _mailboxesToReSync;
	NSArray* _mailboxesToDisableSync;

}

@property (nonatomic,retain) NSArray * mailboxesToUpdate;                   //@synthesize mailboxesToUpdate=_mailboxesToUpdate - In the implementation block
@property (nonatomic,retain) NSArray * mailboxesToReSync;                   //@synthesize mailboxesToReSync=_mailboxesToReSync - In the implementation block
@property (nonatomic,retain) NSArray * mailboxesToDisableSync;              //@synthesize mailboxesToDisableSync=_mailboxesToDisableSync - In the implementation block
-(void)setMailboxesToUpdate:(NSArray *)arg1 ;
-(void)setMailboxesToReSync:(NSArray *)arg1 ;
-(void)setMailboxesToDisableSync:(NSArray *)arg1 ;
-(NSArray *)mailboxesToUpdate;
-(NSArray *)mailboxesToReSync;
-(NSArray *)mailboxesToDisableSync;
@end

