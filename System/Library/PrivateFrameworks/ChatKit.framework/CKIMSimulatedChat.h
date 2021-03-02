/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMChat.h>
#import <libobjc.A.dylib/CKIMSimulatedChatDelegate.h>
#import <libobjc.A.dylib/CKIMSimulatedDaemonListener.h>

@protocol CKIMSimulatedChatDelegate;
@class CKIMSimulatedAccount, NSString, NSArray, IMHandle;

@interface CKIMSimulatedChat : IMChat <CKIMSimulatedChatDelegate, CKIMSimulatedDaemonListener> {

	id<CKIMSimulatedChatDelegate> _delegate;
	CKIMSimulatedAccount* _simulatedAccount;
	NSString* _simulatedGUID;
	NSArray* _incomingHandles;
	IMHandle* _outgoingHandle;
	unsigned long long _currentMessageID;
	NSString* _simulatedChatIdentifier;

}

@property (nonatomic,readonly) CKIMSimulatedAccount * simulatedAccount;                  //@synthesize simulatedAccount=_simulatedAccount - In the implementation block
@property (nonatomic,readonly) NSString * simulatedGUID;                                 //@synthesize simulatedGUID=_simulatedGUID - In the implementation block
@property (nonatomic,readonly) NSArray * incomingHandles;                                //@synthesize incomingHandles=_incomingHandles - In the implementation block
@property (nonatomic,readonly) IMHandle * outgoingHandle;                                //@synthesize outgoingHandle=_outgoingHandle - In the implementation block
@property (nonatomic,readonly) unsigned long long currentMessageID;                      //@synthesize currentMessageID=_currentMessageID - In the implementation block
@property (nonatomic,copy) NSString * simulatedChatIdentifier;                           //@synthesize simulatedChatIdentifier=_simulatedChatIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<CKIMSimulatedChatDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)prepopulatedChat;
-(void)sendMessage:(id)arg1 ;
-(id)account;
-(id)recipient;
-(unsigned char)chatStyle;
-(void)simulatedDaemon:(id)arg1 willSendBalloonPayload:(id)arg2 attachments:(id)arg3 messageGUID:(id)arg4 bundleID:(id)arg5 ;
-(IMHandle *)outgoingHandle;
-(id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(BOOL)arg3 ;
-(void)markAsAutoSpamReported;
-(id)participants;
-(void)chat:(id)arg1 didSendMessage:(id)arg2 finished:(BOOL)arg3 ;
-(void)_sendMessage:(id)arg1 adjustingSender:(BOOL)arg2 shouldQueue:(BOOL)arg3 ;
-(unsigned long long)currentMessageID;
-(NSArray *)incomingHandles;
-(BOOL)_handleIncomingItem:(id)arg1 ;
-(NSString *)simulatedGUID;
-(NSString *)simulatedChatIdentifier;
-(void)setSimulatedChatIdentifier:(NSString *)arg1 ;
-(id)_messageWithGUID:(id)arg1 ;
-(id)initWithIncomingIDs:(id)arg1 outgoingID:(id)arg2 messageIDOffset:(unsigned long long)arg3 service:(id)arg4 ;
-(CKIMSimulatedAccount *)simulatedAccount;
-(void)setDelegate:(id<CKIMSimulatedChatDelegate>)arg1 ;
-(id)chatIdentifier;
-(id)guid;
-(id<CKIMSimulatedChatDelegate>)delegate;
@end
