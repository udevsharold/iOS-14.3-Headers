/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UIView;

@interface CKBrowserSwitcherFooterAccessoryCell : UICollectionReusableView {

	double _minHeight;
	double _maxHeight;
	UIView* _seperatorView;

}

@property (nonatomic,retain) UIView * seperatorView;              //@synthesize seperatorView=_seperatorView - In the implementation block
@property (assign,nonatomic) double minHeight;                    //@synthesize minHeight=_minHeight - In the implementation block
@property (assign,nonatomic) double maxHeight;                    //@synthesize maxHeight=_maxHeight - In the implementation block
+(id)reuseIdentifier;
+(id)supplementryViewKind;
-(void)setMinHeight:(double)arg1 ;
-(void)layoutSubviews;
-(void)setSeperatorView:(UIView *)arg1 ;
-(UIView *)seperatorView;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)minHeight;
-(double)maxHeight;
-(void)setMaxHeight:(double)arg1 ;
@end
