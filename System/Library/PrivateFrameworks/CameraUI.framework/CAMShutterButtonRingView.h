/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface CAMShutterButtonRingView : UIView {

	BOOL _showContrastBorder;
	UIColor* _color;
	CAMShutterButtonSpec _spec;

}

@property (assign,nonatomic) CAMShutterButtonSpec spec;              //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) BOOL showContrastBorder;                //@synthesize showContrastBorder=_showContrastBorder - In the implementation block
@property (nonatomic,retain) UIColor * color;                        //@synthesize color=_color - In the implementation block
-(void)setColor:(UIColor *)arg1 ;
-(void)setSpec:(CAMShutterButtonSpec)arg1 ;
-(UIColor *)color;
-(id)initWithCoder:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)showContrastBorder;
-(void)setShowContrastBorder:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CAMShutterButtonSpec)spec;
-(UIEdgeInsets)alignmentRectInsets;
-(id)initWithSpec:(CAMShutterButtonSpec)arg1 ;
@end
