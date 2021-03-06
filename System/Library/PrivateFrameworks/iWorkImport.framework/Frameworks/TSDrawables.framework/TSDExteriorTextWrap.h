/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface TSDExteriorTextWrap : NSObject <NSCopying, NSMutableCopying> {

	BOOL _isHTMLWrap;
	int _type;
	int _direction;
	int _fitType;
	double _margin;
	double _alphaThreshold;

}

@property (nonatomic,readonly) BOOL isHTMLWrap;                    //@synthesize isHTMLWrap=_isHTMLWrap - In the implementation block
@property (nonatomic,readonly) int type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int direction;                      //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) int fitType;                        //@synthesize fitType=_fitType - In the implementation block
@property (nonatomic,readonly) double margin;                      //@synthesize margin=_margin - In the implementation block
@property (nonatomic,readonly) double alphaThreshold;              //@synthesize alphaThreshold=_alphaThreshold - In the implementation block
+(id)exteriorTextWrapWithIsHTMLWrap:(BOOL)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(double)arg5 alphaThreshold:(double)arg6 ;
+(id)exteriorTextWrap;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)direction;
-(double)alphaThreshold;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)type;
-(int)fitType;
-(BOOL)isEqual:(id)arg1 ;
-(double)margin;
-(BOOL)isHTMLWrap;
-(id)initWithIsHTMLWrap:(BOOL)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(double)arg5 alphaThreshold:(double)arg6 ;
@end

