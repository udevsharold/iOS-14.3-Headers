/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface NFContainerPool : NSObject {

	BOOL _objectGraphDrainingEnabled;
	NSMutableDictionary* _singletons;
	NSMutableDictionary* _containerSingletons;
	NSMutableDictionary* _graph;
	unsigned long long _depth;
	unsigned long long _drainDepth;
	NSMutableArray* _onDrainBlocks;
	NSMutableArray* _onDrainCopyPoolObjectGraphBlocks;

}

@property (nonatomic,retain) NSMutableDictionary * singletons;                                                     //@synthesize singletons=_singletons - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * containerSingletons;                                            //@synthesize containerSingletons=_containerSingletons - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * graph;                                                          //@synthesize graph=_graph - In the implementation block
@property (assign,nonatomic) unsigned long long depth;                                                             //@synthesize depth=_depth - In the implementation block
@property (assign,nonatomic) unsigned long long drainDepth;                                                        //@synthesize drainDepth=_drainDepth - In the implementation block
@property (assign,getter=isObjectGraphDrainingEnabled,nonatomic) BOOL objectGraphDrainingEnabled;                  //@synthesize objectGraphDrainingEnabled=_objectGraphDrainingEnabled - In the implementation block
@property (nonatomic,retain) NSMutableArray * onDrainBlocks;                                                       //@synthesize onDrainBlocks=_onDrainBlocks - In the implementation block
@property (nonatomic,retain) NSMutableArray * onDrainCopyPoolObjectGraphBlocks;                                    //@synthesize onDrainCopyPoolObjectGraphBlocks=_onDrainCopyPoolObjectGraphBlocks - In the implementation block
@property (getter=isPoolPreparedForLockingGraph,nonatomic,readonly) BOOL poolPreparedForLockingGraph; 
-(NSMutableDictionary *)graph;
-(void)setSingletons:(NSMutableDictionary *)arg1 ;
-(void)linkDepth:(/*^block*/id)arg1 ;
-(id)init;
-(unsigned long long)drainDepth;
-(id)enter:(/*^block*/id)arg1 ;
-(void)setObjectGraphDrainingEnabled:(BOOL)arg1 ;
-(NSMutableDictionary *)singletons;
-(unsigned long long)depth;
-(BOOL)isObjectGraphDrainingEnabled;
-(void)onDrain:(/*^block*/id)arg1 ;
-(NSMutableArray *)onDrainBlocks;
-(void)onDrainCopyPoolObjectGraph:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)containerSingletons;
-(id)copyWithObjectGraphDrainingDisabled;
-(NSMutableArray *)onDrainCopyPoolObjectGraphBlocks;
-(void)setOnDrainBlocks:(NSMutableArray *)arg1 ;
-(id)initWithSingletonPool:(id)arg1 ;
-(void)setContainerSingletons:(NSMutableDictionary *)arg1 ;
-(void)setGraph:(NSMutableDictionary *)arg1 ;
-(void)drain;
-(BOOL)isPoolPreparedForLockingGraph;
-(void)setDepth:(unsigned long long)arg1 ;
-(void)setOnDrainCopyPoolObjectGraphBlocks:(NSMutableArray *)arg1 ;
-(void)setDrainDepth:(unsigned long long)arg1 ;
@end
