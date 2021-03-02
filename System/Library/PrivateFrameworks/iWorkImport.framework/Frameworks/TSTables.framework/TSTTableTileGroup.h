/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSTTableTile, TSPLazyReference;

@interface TSTTableTileGroup : NSObject {

	TSTTableTile* _tiles[256];
	TSPLazyReference* _references[256];
	unsigned long long _startingTileID;

}

@property (assign,nonatomic) unsigned long long startingTileID;              //@synthesize startingTileID=_startingTileID - In the implementation block
+(id)groupWithStartingTileID:(unsigned long long)arg1 ;
-(id)init;
-(void)enumerateReferencesWithBlock:(/*^block*/id)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)setReference:(id)arg1 forTileID:(unsigned long long)arg2 ;
-(void)enumerateTilesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateLoadedTilesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithStartingTileID:(unsigned long long)arg1 ;
-(id)_tileForLazyReference:(id)arg1 ;
-(unsigned long long)startingTileID;
-(void)setStartingTileID:(unsigned long long)arg1 ;
@end
