/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIBezierPath;

@interface _UITileLayer : CALayer {

	UIBezierPath* maskPath;
	AB pendingDeferredOffscreenSetNeedsDisplay;

}
-(void)setNeedsDisplay;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)actionForKey:(id)arg1 ;
@end
