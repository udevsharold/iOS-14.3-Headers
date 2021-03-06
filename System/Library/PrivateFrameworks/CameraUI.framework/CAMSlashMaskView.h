/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAShapeLayer;

@interface CAMSlashMaskView : UIView {

	CGRect _slashBounds;

}

@property (nonatomic,readonly) CAShapeLayer * _shapeLayer; 
@property (assign,nonatomic) CGRect slashBounds;                        //@synthesize slashBounds=_slashBounds - In the implementation block
+(Class)layerClass;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(CAShapeLayer *)_shapeLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateMaskAnimated;
-(void)setSlashBounds:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)_updateShapeLayerAnimated:(BOOL)arg1 ;
-(CGRect)slashBounds;
-(void)setSlashBounds:(CGRect)arg1 ;
@end

