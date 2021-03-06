/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EDInteractionEventLog.h>

@class NSArray;

@interface EDInteractionEventLogMultiplexer : NSObject <EDInteractionEventLog> {

	NSArray* _logs;

}

@property (nonatomic,retain) NSArray * logs;              //@synthesize logs=_logs - In the implementation block
-(NSArray *)logs;
-(id)description;
-(void)setLogs:(NSArray *)arg1 ;
-(id)initWithLogs:(id)arg1 ;
-(void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 data:(id)arg4 ;
-(void)persistEvent:(id)arg1 date:(id)arg2 conversationID:(long long)arg3 data:(id)arg4 ;
-(void)persistEvent:(id)arg1 dataFromMessage:(id)arg2 ;
-(void)persistEvent:(id)arg1 dataFromMessage:(id)arg2 account:(id)arg3 ;
-(void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 mailbox:(id)arg4 ;
-(void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 mailboxType:(long long)arg4 ;
@end

