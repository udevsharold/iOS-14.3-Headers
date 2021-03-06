/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAudioKit/CoreAudioKit-Structs.h>
#import <UIKitCore/UIButton.h>

@interface CAUITransportButton : UIButton {

	int drawingStyle;
	CGColorRef fillColor;
	CGRect imageRect;

}

@property (assign) int drawingStyle; 
@property (assign) CGColorRef fillColor; 
+(Class)layerClass;
-(void)setFillColor:(CGColorRef)arg1 ;
-(void)flash;
-(CGColorRef)fillColor;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setDrawingStyle:(int)arg1 ;
-(int)drawingStyle;
-(CGPathRef)newPathRefForStyle:(int)arg1 ;
@end

