/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIStyleEffectConfiguration.h>

@class NSString;

@interface CUIBackgroundStyleEffectConfiguration : CUIStyleEffectConfiguration {

	NSString* _backgroundType;
	BOOL _effectShowsValue;
	int _shouldRespectOutputBlending;

}

@property (nonatomic,copy) NSString * backgroundType;              //@synthesize backgroundType=_backgroundType - In the implementation block
@property (assign,nonatomic) BOOL effectShowsValue;                //@synthesize effectShowsValue=_effectShowsValue - In the implementation block
-(id)init;
-(void)setSelectionType:(long long)arg1 ;
-(BOOL)effectShowsValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)backgroundType;
-(void)setBackgroundType:(NSString *)arg1 ;
-(BOOL)shouldIgnoreForegroundColor;
-(id)description;
-(void)setEffectShowsValue:(BOOL)arg1 ;
-(void)setShouldRespectOutputBlending:(BOOL)arg1 ;
-(BOOL)shouldRespectOutputBlending;
@end

