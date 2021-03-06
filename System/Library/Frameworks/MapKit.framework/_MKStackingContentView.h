/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MKUIViewControllerRootView.h>
#import <libobjc.A.dylib/MKVibrantGroup.h>

@class NSLayoutConstraint, UIView, NSString;

@interface _MKStackingContentView : _MKUIViewControllerRootView <MKVibrantGroup> {

	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _middleConstraint;
	NSLayoutConstraint* _bottomConstraint;
	UIView* _topView;
	UIView* _bottomView;

}

@property (nonatomic,retain) UIView * topView;                                     //@synthesize topView=_topView - In the implementation block
@property (nonatomic,retain) UIView * bottomView;                                  //@synthesize bottomView=_bottomView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * bottomConstraint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateConstraints;
-(UIView *)topView;
-(void)setBottomView:(UIView *)arg1 ;
-(void)setTopView:(UIView *)arg1 ;
-(NSLayoutConstraint *)bottomConstraint;
-(UIView *)bottomView;
-(id)vibrancyGroupName;
-(id)initWithViewController:(id)arg1 ;
@end

