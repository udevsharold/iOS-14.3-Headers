/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFInvalidating.h>

@class AFAnalyticsObserverConnection, NSSet, NSString;

@interface AFInstrumentationObserverConnection : NSObject <AFInvalidating> {

	AFAnalyticsObserverConnection* _observerConnection;
	NSSet* _filteredTagIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)flushWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithObservation:(/*^block*/id)arg1 filterByInstrumentationTypes:(id)arg2 ;
-(id)initWithObservation:(/*^block*/id)arg1 ;
-(void)waitUntilInvalidated;
-(void)invalidate;
@end

