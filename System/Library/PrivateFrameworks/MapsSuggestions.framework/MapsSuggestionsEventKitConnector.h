/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MapsSuggestionsEventKitConnector <MapsSuggestionsObject>
@property (assign,nonatomic,__weak) id<MapsSuggestionsEventKitConnectorDelegate> delegate; 
@required
-(void)stopListeningForChanges;
-(id)calendarsForEntityType:(unsigned long long)arg1;
-(id)eventsMatchingPredicate:(id)arg1;
-(void)startListeningForChanges;
-(id)visibleCalendars;
-(void)setDelegate:(id)arg1;
-(BOOL)removeEvent:(id)arg1 span:(long long)arg2 error:(id*)arg3;
-(id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3;
-(id)eventWithIdentifier:(id)arg1;
-(id<MapsSuggestionsEventKitConnectorDelegate>)delegate;

@end
