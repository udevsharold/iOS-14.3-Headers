/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/CCUIAnimationTimingFunctionDescription.h>

@class NSString;

@interface CCUIAnimationCustomTimingFunctionParameters : NSObject <CCUIAnimationTimingFunctionDescription> {

	CGPoint _controlPoint1;
	CGPoint _controlPoint2;

}

@property (nonatomic,readonly) CGPoint controlPoint1;               //@synthesize controlPoint1=_controlPoint1 - In the implementation block
@property (nonatomic,readonly) CGPoint controlPoint2;               //@synthesize controlPoint2=_controlPoint2 - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)functionWithControlPoint1:(CGPoint)arg1 controlPoint2:(CGPoint)arg2 ;
-(CGPoint)controlPoint2;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(CGPoint)controlPoint1;
-(id)_initWithControlPoint1:(CGPoint)arg1 controlPoint2:(CGPoint)arg2 ;
@end
