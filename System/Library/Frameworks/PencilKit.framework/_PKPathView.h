/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIBezierPath, UIColor;

@interface _PKPathView : UIView

@property (nonatomic,retain) UIBezierPath * path; 
@property (nonatomic,retain) UIColor * fillColor; 
+(Class)layerClass;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(UIBezierPath *)path;
-(id)_shapeLayer;
-(void)setPath:(UIBezierPath *)arg1 ;
@end

