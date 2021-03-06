/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIColor;

@interface _UIAirDropProgressLayer : CALayer {

	double _progressLineWidth;
	double _oneFullRotation;
	BOOL _showProgressTray;
	UIColor* _progressColor;
	UIColor* _progressBackgroundColor;

}

@property (nonatomic,retain) UIColor * progressColor;                        //@synthesize progressColor=_progressColor - In the implementation block
@property (nonatomic,retain) UIColor * progressBackgroundColor;              //@synthesize progressBackgroundColor=_progressBackgroundColor - In the implementation block
@property (assign,nonatomic) double progressLineWidth;                       //@synthesize progressLineWidth=_progressLineWidth - In the implementation block
@property (assign,nonatomic) BOOL showProgressTray;                          //@synthesize showProgressTray=_showProgressTray - In the implementation block
@property (assign,nonatomic) double progress; 
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(id)init;
-(void)drawInContext:(CGContextRef)arg1 ;
-(UIColor *)progressColor;
-(void)setProgressColor:(UIColor *)arg1 ;
-(void)setShowProgressTray:(BOOL)arg1 ;
-(void)setProgressBackgroundColor:(UIColor *)arg1 ;
-(void)setProgressLineWidth:(double)arg1 ;
-(UIColor *)progressBackgroundColor;
-(double)progressLineWidth;
-(BOOL)showProgressTray;
@end

