/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class CKEntity, CKLabel, CKAvatarView, UIView;

@interface CKMentionSuggestionCell : UICollectionViewCell {

	CKEntity* _suggestedEntity;
	CKLabel* _handleLabel;
	CKAvatarView* _avatarView;
	UIView* _hoverView;

}

@property (nonatomic,retain) CKLabel * handleLabel;                   //@synthesize handleLabel=_handleLabel - In the implementation block
@property (nonatomic,retain) CKAvatarView * avatarView;               //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UIView * hoverView;                      //@synthesize hoverView=_hoverView - In the implementation block
@property (nonatomic,retain) CKEntity * suggestedEntity;              //@synthesize suggestedEntity=_suggestedEntity - In the implementation block
+(id)reuseIdentifier;
-(UIView *)hoverView;
-(CKAvatarView *)avatarView;
-(void)setAvatarView:(CKAvatarView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didHoverOverCell:(id)arg1 ;
-(void)setHandleLabel:(CKLabel *)arg1 ;
-(CKLabel *)handleLabel;
-(void)setSuggestedEntity:(CKEntity *)arg1 ;
-(CKEntity *)suggestedEntity;
-(void)setHoverView:(UIView *)arg1 ;
@end
