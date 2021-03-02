/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsFullResourceDepot.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MapsSuggestionsSourceDelegate, MapsSuggestionsNetworkRequester, MapsSuggestionsRoutineConnector, MapsSuggestionsPortraitConnector, MapsSuggestionsEventKitConnector, MapsSuggestionsVirtualGarageConnector, MapsSuggestionsMapsSyncConnector, MapsSuggestionsContactsConnector, MapsSuggestionsShortcutStorage, MapsSuggestionsShortcutSuggestor, MapsSuggestionsFlightRequester;
@class NSString, MapsSuggestionsRoutine, MapsSuggestionsPortrait, MapsSuggestionsEventKit, MapsSuggestionsVirtualGarage, MapsSuggestionsMapsSync, MapsSuggestionsContacts, MapsSuggestionsShortcutManager, MapsSuggestionsUser, MapsSuggestionsInsights, MapsSuggestionsFlightUpdater;

@interface MapsSuggestionsSelfBuildingResourceDepot : NSObject <MapsSuggestionsFullResourceDepot, NSCopying> {

	NSString* _name;
	id<MapsSuggestionsSourceDelegate> _oneSourceDelegate;
	id<MapsSuggestionsNetworkRequester> _oneNetworkRequester;
	id<MapsSuggestionsRoutineConnector> _oneRoutineConnector;
	MapsSuggestionsRoutine* _oneRoutine;
	id<MapsSuggestionsPortraitConnector> _onePortraitConnector;
	MapsSuggestionsPortrait* _onePortrait;
	id<MapsSuggestionsEventKitConnector> _oneEventKitConnector;
	MapsSuggestionsEventKit* _oneEventKit;
	id<MapsSuggestionsVirtualGarageConnector> _oneVirtualGarageConnector;
	MapsSuggestionsVirtualGarage* _oneVirtualGarage;
	id<MapsSuggestionsMapsSyncConnector> _oneMapsSyncConnector;
	MapsSuggestionsMapsSync* _oneMapsSync;
	id<MapsSuggestionsContactsConnector> _oneContactsConnector;
	MapsSuggestionsContacts* _oneContacts;
	id<MapsSuggestionsShortcutStorage> _oneFavoritesStorage;
	id<MapsSuggestionsShortcutSuggestor> _oneFavoritesSuggestor;
	MapsSuggestionsShortcutManager* _oneFavorites;
	MapsSuggestionsUser* _oneUser;
	MapsSuggestionsInsights* _oneInsights;
	id<MapsSuggestionsFlightRequester> _oneFlightRequester;
	MapsSuggestionsFlightUpdater* _oneFlightUpdater;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)oneNetworkRequester;
-(id)oneFlightUpdater;
-(NSString *)uniqueName;
-(id)oneMapsSync;
-(id)oneSourceDelegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)oneVirtualGarage;
-(id)oneEventKit;
-(id)onePortrait;
-(id)oneFavorites;
-(id)oneUser;
-(id)oneContactsConnector;
-(id)oneFlightRequester;
-(id)oneEventKitConnector;
-(id)oneVirtualGarageConnector;
-(id)oneFavoritesStorage;
-(id)oneFavoritesSuggestor;
-(id)onePortraitConnector;
-(id)oneRoutineConnector;
-(id)oneMapsSyncConnector;
-(void)setOneSourceDelegate:(id)arg1 ;
-(void)setOneNetworkRequester:(id)arg1 ;
-(void)setOneRoutineConnector:(id)arg1 ;
-(void)setOneRoutine:(id)arg1 ;
-(void)setOneEventKit:(id)arg1 ;
-(void)setOneEventKitConnector:(id)arg1 ;
-(void)setOneMapsSyncConnector:(id)arg1 ;
-(void)setOneMapsSync:(id)arg1 ;
-(void)setOneContactsConnector:(id)arg1 ;
-(void)setOneContacts:(id)arg1 ;
-(void)setOnePortraitConnector:(id)arg1 ;
-(void)setOnePortrait:(id)arg1 ;
-(void)setOneVirtualGarageConnector:(id)arg1 ;
-(void)setOneVirtualGarage:(id)arg1 ;
-(void)setOneFavorites:(id)arg1 ;
-(void)setOneUser:(id)arg1 ;
-(void)setOneInsights:(id)arg1 ;
-(void)setOneFlightRequester:(id)arg1 ;
-(void)setOneFlightUpdater:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)oneInsights;
-(id)oneContacts;
-(id)oneRoutine;
@end
