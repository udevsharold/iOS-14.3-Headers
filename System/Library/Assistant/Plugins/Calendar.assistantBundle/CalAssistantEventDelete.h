/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Assistant/Plugins/Calendar.assistantBundle/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObjectDelete.h>

@class EKEventStore;

@interface CalAssistantEventDelete : SADomainObjectDelete {

	EKEventStore* _eventStore;

}
-(void)setEventStore:(id)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(id)eventStore;
-(id)_validateEvent:(id)arg1 ;
-(id)_deleteEvent:(id)arg1 ;
@end
