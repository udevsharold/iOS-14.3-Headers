/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptMessageCell.h>
#import <libobjc.A.dylib/CKLayerDelegate.h>

@class CKTypingView;

@interface CKTranscriptTypingIndicatorCell : CKTranscriptMessageCell <CKLayerDelegate> {

	CKTypingView* _typingView;

}

@property (nonatomic,retain) CKTypingView * typingView;                                            //@synthesize typingView=_typingView - In the implementation block
@property (nonatomic,retain) CALayer*<IMTypingIndicatorLayerProtocol> indicatorLayer; 
-(void)setTraitCollection:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)dealloc;
-(void)ckLayerDidBecomeVisible:(BOOL)arg1 ;
-(void)setOrientation:(char)arg1 ;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(void)performRemoval:(/*^block*/id)arg1 ;
-(CKTypingView *)typingView;
-(void)stopPulseAnimation;
-(void)startShrinkAnimation;
-(void)setTypingView:(CKTypingView *)arg1 ;
-(void)setIndicatorLayer:(CALayer*<IMTypingIndicatorLayerProtocol>)arg1 ;
-(void)prepareForReuse;
-(void)startGrowAnimation;
-(void)startPulseAnimation;
-(id)initWithFrame:(CGRect)arg1 ;
-(CALayer*<IMTypingIndicatorLayerProtocol>)indicatorLayer;
-(void)configureForChatItem:(id)arg1 context:(id)arg2 ;
@end
