/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableArray;

@interface GCHapticMotor : NSObject <NSCopying, NSSecureCoding> {

	int _index;
	float _frequency;
	float _amplitude;
	NSString* _name;
	unsigned long long _features;
	NSMutableArray* _queuedTransients;

}

@property (nonatomic,retain) NSMutableArray * queuedTransients;              //@synthesize queuedTransients=_queuedTransients - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int index;                                    //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) unsigned long long features;                  //@synthesize features=_features - In the implementation block
@property (assign,nonatomic) float frequency;                                //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic) float amplitude;                                //@synthesize amplitude=_amplitude - In the implementation block
+(BOOL)supportsSecureCoding;
-(float)amplitude;
-(float)frequency;
-(unsigned long long)features;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)index;
-(void)setFrequency:(float)arg1 ;
-(id)initWithIndex:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(void)setAmplitude:(float)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithIndex:(int)arg1 name:(id)arg2 features:(unsigned long long)arg3 frequency:(float)arg4 amplitude:(float)arg5 ;
-(id)initWithIndex:(int)arg1 name:(id)arg2 features:(unsigned long long)arg3 ;
-(id)initWithIndex:(int)arg1 name:(id)arg2 ;
-(void)applyValuesFrom:(id)arg1 ;
-(void)enqueueHapticTransientEvent:(id)arg1 ;
-(void)drainQueuedTransients;
-(NSMutableArray *)queuedTransients;
-(void)setQueuedTransients:(NSMutableArray *)arg1 ;
@end
