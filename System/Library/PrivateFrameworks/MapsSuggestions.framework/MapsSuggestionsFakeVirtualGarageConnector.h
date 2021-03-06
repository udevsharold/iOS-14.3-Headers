/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsVirtualGarageConnector.h>

@protocol MapsSuggestionsVirtualGarageConnectorDelegate;
@class NSString;

@interface MapsSuggestionsFakeVirtualGarageConnector : NSObject <MapsSuggestionsVirtualGarageConnector> {

	NSString* _testCase;
	id<MapsSuggestionsVirtualGarageConnectorDelegate> delegate;

}

@property (assign,nonatomic,__weak) id<MapsSuggestionsVirtualGarageConnectorDelegate> delegate; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)uniqueName;
-(void)openVGConnection;
-(void)closeVGConnection;
-(void)startObservingVG;
-(void)stopObservingVG;
-(void)fetchUnpairedVehiclesWithHandler:(/*^block*/id)arg1 ;
-(void)fetchStateOfChargeForVehicleWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)configureTestCase:(id)arg1 ;
-(void)simulateUpdateTriggerFromVGWithVehicleCount:(unsigned long long)arg1 validVehicle:(BOOL)arg2 ;
-(void)setDelegate:(id<MapsSuggestionsVirtualGarageConnectorDelegate>)arg1 ;
-(id<MapsSuggestionsVirtualGarageConnectorDelegate>)delegate;
@end

