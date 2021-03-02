/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKStampChatItem.h>

@class NSDate;

@interface CKDateChatItem : CKStampChatItem

@property (nonatomic,readonly) NSDate * date; 
-(NSDate *)date;
-(id)now;
-(unsigned long long)layoutType;
-(id)loadTranscriptText;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
@end
