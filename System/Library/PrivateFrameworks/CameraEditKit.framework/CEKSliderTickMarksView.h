/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEditKit/CameraEditKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CEKTickMarksConfiguration.h>

@protocol CEKSliderTickMarksDelegate;
@class UIColor, NSString;

@interface CEKSliderTickMarksView : UIView <CEKTickMarksConfiguration> {

	BOOL _useTickMarkLegibilityShadows;
	double _tickMarkSpacing;
	long long _mainTickMarkInterval;
	long long _mainTickMarkOffset;
	UIColor* _mainTickMarkColor;
	UIColor* _secondaryTickMarkColor;
	id<CEKSliderTickMarksDelegate> _delegate;
	double _tickMarkWidth;

}

@property (assign,nonatomic,__weak) id<CEKSliderTickMarksDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double tickMarkWidth;                                        //@synthesize tickMarkWidth=_tickMarkWidth - In the implementation block
@property (nonatomic,readonly) long long tickMarksCount; 
@property (assign,nonatomic) long long mainTickMarkInterval;                              //@synthesize mainTickMarkInterval=_mainTickMarkInterval - In the implementation block
@property (assign,nonatomic) double tickMarkSpacing;                                      //@synthesize tickMarkSpacing=_tickMarkSpacing - In the implementation block
@property (assign,nonatomic) long long mainTickMarkOffset;                                //@synthesize mainTickMarkOffset=_mainTickMarkOffset - In the implementation block
@property (assign,nonatomic) BOOL useTickMarkLegibilityShadows;                           //@synthesize useTickMarkLegibilityShadows=_useTickMarkLegibilityShadows - In the implementation block
@property (nonatomic,retain) UIColor * mainTickMarkColor;                                 //@synthesize mainTickMarkColor=_mainTickMarkColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryTickMarkColor;                            //@synthesize secondaryTickMarkColor=_secondaryTickMarkColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<CEKSliderTickMarksDelegate>)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setUseTickMarkLegibilityShadows:(BOOL)arg1 ;
-(id<CEKSliderTickMarksDelegate>)delegate;
-(void)setMainTickMarkInterval:(long long)arg1 ;
-(void)setTickMarkSpacing:(double)arg1 ;
-(void)setMainTickMarkColor:(UIColor *)arg1 ;
-(void)setSecondaryTickMarkColor:(UIColor *)arg1 ;
-(BOOL)useTickMarkLegibilityShadows;
-(double)tickMarkSpacing;
-(double)tickMarkWidth;
-(long long)tickMarksCount;
-(long long)mainTickMarkOffset;
-(long long)mainTickMarkInterval;
-(UIColor *)mainTickMarkColor;
-(UIColor *)secondaryTickMarkColor;
-(id)_colorForMainTickMarks;
-(id)_colorForSecondaryTickMarks;
-(BOOL)isMainTickMarkIndex:(long long)arg1 ;
-(double)xOffsetForTickMarkIndex:(long long)arg1 ;
-(void)setMainTickMarkOffset:(long long)arg1 ;
-(void)setTickMarkWidth:(double)arg1 ;
-(double)widthForTickMarkCount:(unsigned long long)arg1 ;
-(long long)floorTickMarkIndexForXOffset:(double)arg1 ;
@end

