/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicColor.h>

@class UIDynamicColor;

@interface UIDynamicModifiedColor : UIDynamicColor {

	UIDynamicColor* _baseColor;
	double _alphaComponent;
	long long _contrast;

}
+(BOOL)supportsSecureCoding;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_highContrastDynamicColor;
-(id)_backgroundColorIgnoringHighContrast;
-(id)initWithBaseColor:(id)arg1 alphaComponent:(double)arg2 contrast:(long long)arg3 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)_resolvedColorWithTraitCollection:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

