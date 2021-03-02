/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Network/Network-Structs.h>
@class NSString, NSMutableArray, NSArray;

@interface NWAccumulator : NSObject {

	os_unfair_lock_s _lock;
	os_unfair_lock_s _kvo_lock;
	NSString* _name;
	NWAccumulator* _lastSnapshot;
	NSMutableArray* _accumulatedValues;

}

@property (nonatomic,retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * accumulatedValues;              //@synthesize accumulatedValues=_accumulatedValues - In the implementation block
@property (nonatomic,readonly) NSArray * accumulations; 
@property (nonatomic,retain) NWAccumulator * lastSnapshot;                    //@synthesize lastSnapshot=_lastSnapshot - In the implementation block
-(void)setName:(NSString *)arg1 ;
-(id)snapshot;
-(void)reset;
-(void)dealloc;
-(NSArray *)accumulations;
-(id)accumulatedValueForObject:(id)arg1 andKeyPath:(id)arg2 ;
-(void)addAccumulation:(id)arg1 forKey:(id)arg2 stateCallback:(/*^block*/id)arg3 ;
-(void)addAccumulation:(id)arg1 withName:(id)arg2 forKey:(id)arg3 stateCallback:(/*^block*/id)arg4 ;
-(void)registerObserverForKeyPath:(id)arg1 ofObject:(id)arg2 alreadyRegistered:(BOOL)arg3 ;
-(id)awdAccumulator;
-(NSMutableArray *)accumulatedValues;
-(void)setAccumulatedValues:(NSMutableArray *)arg1 ;
-(void)setLastSnapshot:(NWAccumulator *)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)name;
-(NWAccumulator *)lastSnapshot;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithName:(id)arg1 ;
@end
