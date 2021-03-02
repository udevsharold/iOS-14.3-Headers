/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_MPCStateDumpPropertyListTransformable.h>

@class NSString, MPCPlayerResponse, MPSectionedCollection, NSIndexPath, MPCPlayerResponseItem;

@interface MPCPlayerResponseTracklist : NSObject <_MPCStateDumpPropertyListTransformable> {

	unsigned long long _changeItemSupport;
	NSString* _uniqueIdentifier;
	long long _lastChangeDirection;
	long long _upNextItemCount;
	long long _repeatType;
	long long _shuffleType;
	long long _actionAtQueueEnd;
	MPCPlayerResponse* _response;
	MPSectionedCollection* _items;
	NSIndexPath* _playingItemIndexPath;
	MPSectionedCollection* _displayItems;
	long long _playingItemGlobalIndex;
	long long _globalItemCount;

}

@property (nonatomic,__weak,readonly) MPCPlayerResponse * response;                    //@synthesize response=_response - In the implementation block
@property (nonatomic,copy,readonly) MPSectionedCollection * items;                     //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSIndexPath * playingItemIndexPath;                //@synthesize playingItemIndexPath=_playingItemIndexPath - In the implementation block
@property (nonatomic,copy,readonly) MPSectionedCollection * displayItems;              //@synthesize displayItems=_displayItems - In the implementation block
@property (nonatomic,readonly) long long playingItemGlobalIndex;                       //@synthesize playingItemGlobalIndex=_playingItemGlobalIndex - In the implementation block
@property (nonatomic,readonly) long long globalItemCount;                              //@synthesize globalItemCount=_globalItemCount - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier;                            //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) long long lastChangeDirection;                          //@synthesize lastChangeDirection=_lastChangeDirection - In the implementation block
@property (nonatomic,readonly) long long upNextItemCount;                              //@synthesize upNextItemCount=_upNextItemCount - In the implementation block
@property (nonatomic,readonly) MPCPlayerResponseItem * playingItem; 
@property (nonatomic,readonly) long long repeatType;                                   //@synthesize repeatType=_repeatType - In the implementation block
@property (nonatomic,readonly) long long shuffleType;                                  //@synthesize shuffleType=_shuffleType - In the implementation block
@property (nonatomic,readonly) long long actionAtQueueEnd;                             //@synthesize actionAtQueueEnd=_actionAtQueueEnd - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resetCommandForPlayerPath:(id)arg1 devices:(id)arg2 ;
+(id)insertCommandForPlayerPath:(id)arg1 devices:(id)arg2 ;
-(NSIndexPath *)playingItemIndexPath;
-(unsigned long long)_determineChangeItemSupport;
-(id)repeatCommand;
-(id)displayIndexPathForStructuredIndexPath:(id)arg1 ;
-(id)initWithResponse:(id)arg1 ;
-(id)insertCommand;
-(MPCPlayerResponse *)response;
-(long long)upNextItemCount;
-(id)_stateDumpObject;
-(MPSectionedCollection *)items;
-(id)actionAtQueueEndCommand;
-(long long)lastChangeDirection;
-(NSString *)uniqueIdentifier;
-(MPCPlayerResponseItem *)playingItem;
-(id)resetCommand;
-(long long)playingItemGlobalIndex;
-(long long)actionAtQueueEnd;
-(id)shuffleCommand;
-(id)changeItemCommand;
-(id)reorderCommand;
-(long long)shuffleType;
-(long long)repeatType;
-(MPSectionedCollection *)displayItems;
-(long long)globalItemCount;
-(id)structuredIndexPathForDisplayIndexPath:(id)arg1 ;
-(id)disableModificationsCommand;
@end
