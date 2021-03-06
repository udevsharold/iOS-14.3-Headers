/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAShapeLayer;

@interface CAMSlashView : UIView {

	BOOL _visible;

}

@property (nonatomic,readonly) CAShapeLayer * _shapeLayer; 
@property (assign,getter=isVisible,nonatomic) BOOL visible;              //@synthesize visible=_visible - In the implementation block
+(Class)layerClass;
-(void)setVisible:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isVisible;
-(void)layoutSubviews;
-(CAShapeLayer *)_shapeLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateShapeLayerProgressAnimated:(BOOL)arg1 ;
-(void)_updateShapeLayerLineWidth;
-(void)_updateShapeLayerPath;
@end

