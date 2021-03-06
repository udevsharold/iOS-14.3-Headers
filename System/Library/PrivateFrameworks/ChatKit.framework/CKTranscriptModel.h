/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKTranscriptModelDelegate;
@class CKConversation, NSArray, NSDictionary, NSDiffableDataSourceSnapshot;

@interface CKTranscriptModel : NSObject {

	id<CKTranscriptModelDelegate> _delegate;
	CKConversation* _conversation;
	NSArray* _chatItems;
	NSDictionary* _supplementaryKindToChatItemMap;

}

@property (nonatomic,retain) CKConversation * conversation;                               //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) NSArray * chatItems;                                         //@synthesize chatItems=_chatItems - In the implementation block
@property (nonatomic,retain) NSDictionary * supplementaryKindToChatItemMap;               //@synthesize supplementaryKindToChatItemMap=_supplementaryKindToChatItemMap - In the implementation block
@property (assign,nonatomic,__weak) id<CKTranscriptModelDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSDiffableDataSourceSnapshot * snapshot; 
+(id)transcriptSectionIdentifier;
-(void)reload;
-(id)chatItemWithIMChatItem:(id)arg1 traitCollection:(id)arg2 ;
-(NSDiffableDataSourceSnapshot *)snapshot;
-(CKConversation *)conversation;
-(void)setSupplementaryKindToChatItemMap:(NSDictionary *)arg1 ;
-(NSDictionary *)supplementaryKindToChatItemMap;
-(void)setConversation:(CKConversation *)arg1 ;
-(NSArray *)chatItems;
-(void)setDelegate:(id<CKTranscriptModelDelegate>)arg1 ;
-(id)initWithConversation:(id)arg1 delegate:(id)arg2 ;
-(id<CKTranscriptModelDelegate>)delegate;
-(void)setChatItems:(NSArray *)arg1 ;
-(id)chatItemsWithIMChatItems:(id)arg1 ;
@end

