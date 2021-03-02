/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FTCServiceAvailabilityCenter : NSObject {

	NSMutableDictionary* _availabilityHandlers;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)hasListenerID:(id)arg1 forService:(long long)arg2 ;
-(void)dealloc;
-(BOOL)_isValidServiceType:(long long)arg1 ;
-(void)_postNotificationForService:(long long)arg1 availability:(long long)arg2 ;
-(void)_startListeningToMonitor:(id)arg1 ;
-(void)_handleServiceMonitorNotification:(id)arg1 ;
-(BOOL)removeListenerID:(id)arg1 forService:(long long)arg2 ;
-(long long)availabilityForListenerID:(id)arg1 forService:(long long)arg2 ;
-(BOOL)addListenerID:(id)arg1 forService:(long long)arg2 ;
-(id)containerForService:(long long)arg1 create:(BOOL)arg2 ;
-(void)_stopListeningToMonitor:(id)arg1 ;
@end
