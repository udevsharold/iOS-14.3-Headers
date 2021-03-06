/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSNumber;

@interface UIStatusBarStyleRequest : NSObject <NSMutableCopying, NSCopying> {

	long long _style;
	long long _legibilityStyle;
	UIColor* _foregroundColor;
	NSNumber* _overrideHeight;
	double _foregroundAlpha;

}

@property (nonatomic,retain,readonly) NSNumber * overrideHeight;              //@synthesize overrideHeight=_overrideHeight - In the implementation block
@property (nonatomic,readonly) long long style;                               //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long legibilityStyle;                     //@synthesize legibilityStyle=_legibilityStyle - In the implementation block
@property (nonatomic,retain,readonly) UIColor * foregroundColor;              //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,readonly) double foregroundAlpha;                        //@synthesize foregroundAlpha=_foregroundAlpha - In the implementation block
-(BOOL)isTranslucent;
-(UIColor *)foregroundColor;
-(BOOL)isDoubleHeight;
-(BOOL)isLegacy;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(long long)legibilityStyle;
-(unsigned long long)hash;
-(NSNumber *)overrideHeight;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_copyWithZone:(NSZone*)arg1 class:(Class)arg2 ;
-(id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3 foregroundAlpha:(double)arg4 overrideHeight:(id)arg5 ;
-(id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3 foregroundAlpha:(double)arg4 ;
-(double)foregroundAlpha;
-(id)initWithStyle:(long long)arg1 legacy:(BOOL)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 ;
-(id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3 overrideHeight:(id)arg4 ;
-(id)initWithStyle:(long long)arg1 legacy:(BOOL)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 foregroundAlpha:(double)arg5 ;
-(id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3 ;
@end

