/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAccessResource.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, NSString;

@interface WFLocationAccessResource : WFAccessResource <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	/*^block*/id _makeAvailableCompletionHandler;

}

@property (nonatomic,retain) CLLocationManager * locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,copy) id makeAvailableCompletionHandler;                  //@synthesize makeAvailableCompletionHandler=_makeAvailableCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSystemResource;
-(CLLocationManager *)locationManager;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(id)icon;
-(id)name;
-(id)initWithDefinition:(id)arg1 persistentIdentifier:(id)arg2 ;
-(unsigned long long)globalLevelStatus;
-(id)protectedResourceDescription;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finishMakingAvailableWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)makeAvailableCompletionHandler;
-(void)setMakeAvailableCompletionHandler:(id)arg1 ;
@end
