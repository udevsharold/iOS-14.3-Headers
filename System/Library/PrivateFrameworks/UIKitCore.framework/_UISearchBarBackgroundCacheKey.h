/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UISearchBarBackgroundCacheKey : NSObject <NSCopying> {

	long long _barPosition;
	BOOL _usesContiguousBarBackground;
	double _scale;
	double _alpha;
	double _height;
	double _statusBarHeight;
	CGColorRef _backgroundColor;
	CGColorRef _strokeColor;

}
-(id)initWithBarPosition:(long long)arg1 usesContiguousBarBackground:(BOOL)arg2 scale:(double)arg3 alpha:(double)arg4 height:(double)arg5 statusBarHeight:(double)arg6 backgroundColor:(CGColorRef)arg7 strokeColor:(CGColorRef)arg8 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToCacheKey:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

