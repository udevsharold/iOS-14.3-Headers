/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel;

@interface CKAcknowledgmentVoteCountCollectionReusableView : UICollectionReusableView {

	UILabel* _countLabel;

}

@property (nonatomic,retain) UILabel * countLabel;              //@synthesize countLabel=_countLabel - In the implementation block
+(id)supplementaryViewKind;
+(id)reuseIdentifier;
-(UILabel *)countLabel;
-(void)configureWithAcknowledgmentTally:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCountLabel:(UILabel *)arg1 ;
@end

