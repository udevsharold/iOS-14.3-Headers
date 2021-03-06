/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUIKit/CalendarUIKit-Structs.h>
#import <libobjc.A.dylib/CUIKIconGenerator.h>

@class NSString;

@interface CUIKDefaultIconGenerator : NSObject <CUIKIconGenerator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_whiteImageWithSize:(CGSize)arg1 scale:(double)arg2 ;
+(id)_dayNumberStringFromDateComponents:(id)arg1 calendar:(id)arg2 ;
+(void)_drawIconInContext:(CGContextRef)arg1 imageSize:(CGSize)arg2 scale:(double)arg3 iconBase:(id)arg4 dateComponents:(id)arg5 calendar:(id)arg6 format:(long long)arg7 ;
+(id)_dateNameFromDateComponents:(id)arg1 calendar:(id)arg2 type:(long long)arg3 ;
-(CGImageRef)iconImageWithDateComponents:(id)arg1 calendar:(id)arg2 format:(long long)arg3 size:(CGSize)arg4 scale:(double)arg5 ;
@end

