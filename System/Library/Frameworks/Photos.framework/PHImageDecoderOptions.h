/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Photos/Photos-Structs.h>
@interface PHImageDecoderOptions : NSObject {

	BOOL _shouldLoadGainMap;
	BOOL _applyOrientationTransform;
	BOOL _optimizeForDrawing;
	BOOL _highPriority;
	BOOL _waitUntilComplete;
	long long _maximumLongSideLength;
	long long _resizeMode;

}

@property (assign,nonatomic) BOOL shouldLoadGainMap;                       //@synthesize shouldLoadGainMap=_shouldLoadGainMap - In the implementation block
@property (assign,nonatomic) long long maximumLongSideLength;              //@synthesize maximumLongSideLength=_maximumLongSideLength - In the implementation block
@property (assign,nonatomic) long long resizeMode;                         //@synthesize resizeMode=_resizeMode - In the implementation block
@property (assign,nonatomic) BOOL applyOrientationTransform;               //@synthesize applyOrientationTransform=_applyOrientationTransform - In the implementation block
@property (assign,nonatomic) BOOL optimizeForDrawing;                      //@synthesize optimizeForDrawing=_optimizeForDrawing - In the implementation block
@property (assign,nonatomic) BOOL highPriority;                            //@synthesize highPriority=_highPriority - In the implementation block
@property (assign,nonatomic) BOOL waitUntilComplete;                       //@synthesize waitUntilComplete=_waitUntilComplete - In the implementation block
-(BOOL)highPriority;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)resizeMode;
-(BOOL)waitUntilComplete;
-(void)setWaitUntilComplete:(BOOL)arg1 ;
-(void)setResizeMode:(long long)arg1 ;
-(void)setMaximumLongSideLength:(long long)arg1 ;
-(long long)maximumLongSideLength;
-(void)setApplyOrientationTransform:(BOOL)arg1 ;
-(BOOL)applyOrientationTransform;
-(BOOL)shouldLoadGainMap;
-(BOOL)optimizeForDrawing;
-(void)setHighPriority:(BOOL)arg1 ;
-(void)setShouldLoadGainMap:(BOOL)arg1 ;
-(void)setOptimizeForDrawing:(BOOL)arg1 ;
@end
