/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, EKEventStore, NSMutableArray, NSArray;

@interface EKICSPreviewModel : NSObject {

	NSData* _data;
	EKEventStore* _tempStore;
	EKEventStore* _destStore;
	NSMutableArray* _importedEvents;
	NSMutableArray* _unimportedEvents;
	unsigned long long _options;
	unsigned long long _actionsState;
	BOOL _shouldUpdate;

}

@property (nonatomic,readonly) EKEventStore * eventStore; 
@property (nonatomic,readonly) unsigned long long totalEventCount; 
@property (nonatomic,readonly) unsigned long long importedEventCount; 
@property (nonatomic,readonly) unsigned long long unimportedEventCount; 
@property (nonatomic,readonly) unsigned long long actionsState; 
@property (nonatomic,readonly) NSArray * importedEvents; 
@property (nonatomic,readonly) NSArray * unimportedEvents; 
@property (nonatomic,readonly) NSArray * allEvents; 
@property (nonatomic,readonly) BOOL shouldUpdate;                                    //@synthesize shouldUpdate=_shouldUpdate - In the implementation block
-(EKEventStore *)eventStore;
-(unsigned long long)totalEventCount;
-(unsigned long long)unimportedEventCount;
-(NSArray *)importedEvents;
-(NSArray *)allEvents;
-(BOOL)shouldUpdate;
-(id)initWithICSData:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3 ;
-(unsigned long long)importedEventCount;
-(NSArray *)unimportedEvents;
-(id)importEvent:(id)arg1 intoCalendar:(id)arg2 ;
-(id)importAllIntoCalendar:(id)arg1 ;
-(unsigned long long)actionsState;
@end

