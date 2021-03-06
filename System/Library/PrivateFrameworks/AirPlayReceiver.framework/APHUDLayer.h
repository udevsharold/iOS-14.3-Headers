/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
#import <QuartzCore/CALayer.h>

@interface APHUDLayer : CALayer {

	CTFontRef _Font;
	CFDictionaryRef _TextAttributes;
	CFArrayRef _Labels;
	CFArrayRef _Values;
	CFArrayRef _Colors;

}
-(id)init;
-(void)dealloc;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)addLine:(CFStringRef)arg1 withColorIndex:(int)arg2 ;
-(void)setValueAtIndex:(int)arg1 format:(id)arg2 ;
-(void)setValue:(CFStringRef)arg1 atIndex:(int)arg2 ;
@end

