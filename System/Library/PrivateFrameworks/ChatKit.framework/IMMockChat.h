/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMChat.h>

@class NSArray, IMHandle, IMMessage;

@interface IMMockChat : IMChat {

	NSArray* _mockChatItems;
	IMHandle* _incomingHandle;
	IMHandle* _outgoingHandle;
	IMMessage* _lastMockIMMessage;
	NSArray* _extraParticipants;
	unsigned long long _mockUnreadMessageCount;

}

@property (nonatomic,retain) NSArray * mockChatItems;                                //@synthesize mockChatItems=_mockChatItems - In the implementation block
@property (nonatomic,retain) IMHandle * incomingHandle;                              //@synthesize incomingHandle=_incomingHandle - In the implementation block
@property (nonatomic,retain) IMHandle * outgoingHandle;                              //@synthesize outgoingHandle=_outgoingHandle - In the implementation block
@property (nonatomic,retain) IMMessage * lastMockIMMessage;                          //@synthesize lastMockIMMessage=_lastMockIMMessage - In the implementation block
@property (nonatomic,retain) NSArray * extraParticipants;                            //@synthesize extraParticipants=_extraParticipants - In the implementation block
@property (assign,nonatomic) unsigned long long mockUnreadMessageCount;              //@synthesize mockUnreadMessageCount=_mockUnreadMessageCount - In the implementation block
-(id)lastFinishedMessage;
-(id)init;
-(id)recipient;
-(void)setIncomingHandle:(IMHandle *)arg1 ;
-(void)setOutgoingHandle:(IMHandle *)arg1 ;
-(IMHandle *)incomingHandle;
-(id)_chatItemFromMockItemInfo:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_messageFromMockItemInfo:(id)arg1 ;
-(void)setExtraParticipants:(NSArray *)arg1 ;
-(NSArray *)extraParticipants;
-(NSArray *)mockChatItems;
-(unsigned long long)mockUnreadMessageCount;
-(void)deleteChatItems:(id)arg1 ;
-(void)setMockChatItems:(NSArray *)arg1 ;
-(IMHandle *)outgoingHandle;
-(void)addExtraParticipants:(id)arg1 ;
-(id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(BOOL)arg3 ;
-(BOOL)deleteAllHistory;
-(void)setupWithMockItemInfoArray:(id)arg1 ;
-(IMMessage *)lastMockIMMessage;
-(void)appendMockItemWithInfo:(id)arg1 ;
-(void)setLastMockIMMessage:(IMMessage *)arg1 ;
-(void)setMockUnreadMessageCount:(unsigned long long)arg1 ;
-(id)lastFinishedMessageDate;
-(unsigned long long)unreadMessageCount;
-(id)participants;
-(id)chatItems;
-(unsigned long long)messageCount;
-(id)lastMessage;
-(id)displayName;
@end
