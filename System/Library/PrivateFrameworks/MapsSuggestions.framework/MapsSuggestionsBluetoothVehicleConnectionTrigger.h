/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsCompositeTriggeringToggle.h>
#import <MapsSuggestions/MapsSuggestionsTriggerObserver.h>

@class MapsSuggestionsDarwinNotificationTrigger, NSString;

@interface MapsSuggestionsBluetoothVehicleConnectionTrigger : MapsSuggestionsCompositeTriggeringToggle <MapsSuggestionsTriggerObserver> {

	BOOL _onExit;
	BOOL _onConnect;
	BOOL _onDisconnect;
	MapsSuggestionsDarwinNotificationTrigger* _btDisconnectTrigger;
	MapsSuggestionsDarwinNotificationTrigger* _btExitTrigger;
	MapsSuggestionsDarwinNotificationTrigger* _btConnectTrigger;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)triggerFired:(id)arg1 ;
-(id)initFireOnConnect:(BOOL)arg1 disconnect:(BOOL)arg2 exit:(BOOL)arg3 ;
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;
@end

