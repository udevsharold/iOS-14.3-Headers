/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class UIImageView, UILabel;

@interface PKPaymentCredentialTableViewCell : PKTableViewCell {

	BOOL _showingPlaceholder;
	BOOL _snapshotImageHasBorder;
	UIImageView* _snapshotImageView;
	UILabel* _credentialDetailLabel;

}

@property (nonatomic,readonly) UIImageView * snapshotImageView;              //@synthesize snapshotImageView=_snapshotImageView - In the implementation block
@property (nonatomic,readonly) UILabel * credentialDetailLabel;              //@synthesize credentialDetailLabel=_credentialDetailLabel - In the implementation block
@property (assign,nonatomic) BOOL showingPlaceholder;                        //@synthesize showingPlaceholder=_showingPlaceholder - In the implementation block
@property (assign,nonatomic) BOOL snapshotImageHasBorder;                    //@synthesize snapshotImageHasBorder=_snapshotImageHasBorder - In the implementation block
+(CGSize)defaultImageViewSize;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(id)detailTextLabelColor;
-(void)setSnapshotImageHasBorder:(BOOL)arg1 ;
-(UILabel *)credentialDetailLabel;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(BOOL)snapshotImageHasBorder;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImageView *)snapshotImageView;
-(void)setShowingPlaceholder:(BOOL)arg1 ;
-(BOOL)showingPlaceholder;
@end

