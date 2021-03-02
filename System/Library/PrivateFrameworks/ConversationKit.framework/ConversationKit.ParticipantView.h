/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConversationKit/ConversationKit-Structs.h>
#import <UIKitCore/UIView.h>

@class _TtC15ConversationKit19ParticipantInfoView;

@interface ConversationKit.ParticipantView : UIView {

	 backgroundEffectsView;
	 contentView;
	 monogramView;
	 videoView;
	 alertView;
	 videoOverlayView;
	 bottomBar;
	 debugLabel;
	 mostRecentViewModelHash;
	??? loggingIdentifier;
	 hideBottomBarTimer;
	 hideAlertViewTimer;
	??? participantIdentifier;
	 delegate;
	 isInRoster;
	 customCornerRadius;
	 isExpanded;

}

@property (readonly,nonatomic) _TtC15ConversationKit19ParticipantInfoView * bottomBar; 
@property (assign,nonatomic) BOOL isInRoster; 
@property (assign,nonatomic) BOOL isExpanded; 
-(BOOL)isExpanded;
-(void)setIsExpanded:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(_TtC15ConversationKit19ParticipantInfoView *)bottomBar;
-(BOOL)isInRoster;
-(void)setIsInRoster:(BOOL)arg1 ;
@end
