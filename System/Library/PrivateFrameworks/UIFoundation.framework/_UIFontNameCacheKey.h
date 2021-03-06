/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/_UIFontCacheKey.h>

@class NSString;

@interface _UIFontNameCacheKey : _UIFontCacheKey {

	int _traits;
	NSString* _fontName;
	double _pointSize;

}

@property (nonatomic,copy) NSString * fontName;              //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) int traits;                     //@synthesize traits=_traits - In the implementation block
@property (assign,nonatomic) double pointSize;               //@synthesize pointSize=_pointSize - In the implementation block
-(void)setFontName:(NSString *)arg1 ;
-(BOOL)_isEqualToKey:(id)arg1 ;
-(NSString *)fontName;
-(void)setTraits:(int)arg1 ;
-(double)pointSize;
-(void)dealloc;
-(void)setPointSize:(double)arg1 ;
-(id)description;
-(int)traits;
-(unsigned long long)_hash;
@end

