/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUAnimatable.h>

@class NSMutableArray, NSDate, NUSpheroid, NSArray, NSString;

@interface NUScene : NSObject <NUAnimatable> {

	NSMutableArray* _spheroids;
	unsigned long long _snap;
	NSMutableArray* _animations;
	NSDate* _date;
	/*^block*/id _currentDateBlock;
	unsigned _isUpdateNeeded : 1;
	unsigned _isUpdatable : 1;
	float _orbit;
	float _roll;
	int _minFrameInterval;
	float _yearsSince1970;
	NUSpheroid* _focus;
	unsigned long long _backgroundType;
	unsigned long long _projectionType;
	unsigned long long _collectionType;
	 _position;
	 _target;
	 _up;

}

@property (nonatomic,readonly)  position;                                    //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly)  target;                                      //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly)  up;                                          //@synthesize up=_up - In the implementation block
@property (nonatomic,retain) NUSpheroid * focus;                             //@synthesize focus=_focus - In the implementation block
@property (assign,nonatomic) float orbit;                                    //@synthesize orbit=_orbit - In the implementation block
@property (assign,nonatomic) float roll;                                     //@synthesize roll=_roll - In the implementation block
@property (assign,nonatomic) int minFrameInterval;                           //@synthesize minFrameInterval=_minFrameInterval - In the implementation block
@property (nonatomic,readonly) int acceptableFrameInterval; 
@property (assign,nonatomic) unsigned long long snap; 
@property (assign,nonatomic) unsigned long long backgroundType;              //@synthesize backgroundType=_backgroundType - In the implementation block
@property (assign,nonatomic) unsigned long long projectionType;              //@synthesize projectionType=_projectionType - In the implementation block
@property (assign,nonatomic) unsigned long long collectionType;              //@synthesize collectionType=_collectionType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * spheroids;                     //@synthesize spheroids=_spheroids - In the implementation block
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,copy) id currentDateBlock;                              //@synthesize currentDateBlock=_currentDateBlock - In the implementation block
@property (assign,getter=isUpdatable,nonatomic) BOOL updatable;              //@synthesize isUpdatable=_isUpdatable - In the implementation block
@property (nonatomic,readonly) float yearsSince1970;                         //@synthesize yearsSince1970=_yearsSince1970 - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NUSpheroid *)focus;
-(float)roll;
-(void)addAnimation:(id)arg1 ;
-(unsigned long long)snap;
-(unsigned long long)collectionType;
-(NSDate *)date;
-(float)orbit;
-()target;
-(unsigned long long)backgroundType;
-(void)setBackgroundType:(unsigned long long)arg1 ;
-(void)setCollectionType:(unsigned long long)arg1 ;
-()position;
-(BOOL)isUpdatable;
-(void)update:(float)arg1 ;
-(void)removeAnimation:(id)arg1 ;
-(void)setRoll:(float)arg1 ;
-()up;
-(void)setMinFrameInterval:(int)arg1 ;
-(void)updateSunLocationAnimated:(BOOL)arg1 ;
-(id)spheroidOfType:(unsigned long long)arg1 ;
-(void)setOrbit:(float)arg1 ;
-(NSArray *)spheroids;
-(void)setSnap:(unsigned long long)arg1 ;
-(id)initWithSphereoids:(unsigned long long)arg1 currentDateBlock:(/*^block*/id)arg2 ;
-(void)setUpdatable:(BOOL)arg1 ;
-(void)setFocus:(NUSpheroid *)arg1 ;
-(void)removeAllAnimationsFor:(id)arg1 withKeys:(unsigned long long)arg2 ;
-(BOOL)isAnimating:(id)arg1 forKeys:(unsigned long long)arg2 ;
-(void)setCamera:(float)arg1 ;
-(2)animatedFloatForKey:(unsigned long long)arg1 ;
-(void)setAnimatedFloat:(unsigned long long)arg1 ;
-(int)acceptableFrameInterval;
-(void)updateFromDateIfNeeded;
-(int)minFrameInterval;
-(unsigned long long)projectionType;
-(void)setProjectionType:(unsigned long long)arg1 ;
-(id)currentDateBlock;
-(void)setCurrentDateBlock:(id)arg1 ;
-(float)yearsSince1970;
@end

