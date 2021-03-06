/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol MapsSuggestionsPortraitConnector, MapsSuggestionsNetworkRequester, OS_dispatch_queue;
@class PPLocationStore, PPConnectionsStore, PPNamedEntityStore, PPConnectionsCriteria, NSString, GEOMapItemStorage, NSNumber, NSObject;

@interface MapsSuggestionsPortrait : NSObject <MapsSuggestionsObject> {

	id<MapsSuggestionsPortraitConnector> _connector;
	id<MapsSuggestionsNetworkRequester> _networkRequester;
	PPLocationStore* _locationStore;
	PPConnectionsStore* _connectionsStore;
	PPNamedEntityStore* _namedEntityStore;
	PPConnectionsCriteria* _criteria;
	NSString* _cachedKey;
	GEOMapItemStorage* _cachedMapItem;
	NSNumber* _cachedMapItemOrigin;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initFromResourceDepot:(id)arg1 ;
-(NSString *)uniqueName;
-(id)initWithPortraitConnector:(id)arg1 networkRequester:(id)arg2 ;
-(BOOL)fetchLocationEntriesForTray:(BOOL)arg1 currentLocation:(id)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)sendFeedbackforClientID:(id)arg1 storeType:(long long)arg2 explicitlyEngagedStrings:(id)arg3 explicitlyRejectedStrings:(id)arg4 implicitlyEngagedStrings:(id)arg5 implicitlyRejectedStrings:(id)arg6 ;
-(BOOL)fetchConnectionEntriesWithHandler:(/*^block*/id)arg1 ;
-(id)fetchNamedEntitiesFromDate:(id)arg1 ;
@end

