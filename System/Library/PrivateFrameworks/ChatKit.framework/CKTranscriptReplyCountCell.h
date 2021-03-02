/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKTranscriptStatusCell.h>

@interface CKTranscriptReplyCountCell : CKTranscriptStatusCell {

	double _countAlpha;

}

@property (assign,nonatomic) double countAlpha;              //@synthesize countAlpha=_countAlpha - In the implementation block
-(void)addFilter:(id)arg1 ;
-(void)clearFilters;
-(void)layoutSubviewsForAlignmentContents;
-(BOOL)hidesCheckmark;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(double)countAlpha;
-(void)_fadeInLabelAtStartTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCountAlpha:(double)arg1 ;
-(id)animationWithKeyPath:(id)arg1 beginTime:(double)arg2 duration:(double)arg3 fromValue:(id)arg4 toValue:(id)arg5 ;
-(void)performRemoval:(/*^block*/id)arg1 ;
-(void)performReload:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareForReuse;
-(BOOL)wantsDrawerLayout;
-(BOOL)shouldHideDuringDarkFSM;
-(void)configureForChatItem:(id)arg1 context:(id)arg2 ;
@end
