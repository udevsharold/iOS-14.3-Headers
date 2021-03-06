/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLLocationManagerDelegate;
#import <CoreLocation/CoreLocation-Structs.h>
@class CLLocationManager, CLLocationManagerStateTracker, NSString, CLTimer, NSMutableSet, CLSilo;

@interface CLLocationManagerInternal : NSObject {

	CLClientRef fClient;
	id<CLLocationManagerDelegate> fDelegate;
	CLLocationManager* fManager;
	CLLocationManagerStateTracker* fState;
	SCD_Struct_CL3 fLocation;
	NSString* fLocationEventType;
	CLTimer* fLocationRequestTimer;
	double fLocationRequestTimeout;
	CLTimer* fRangingRequestTimer;
	double fLastRangingRequestTimeout;
	unsigned long long fLastRangingRequestMachTime;
	int fHeadingOrientation;
	NSMutableSet* fRangedRegions;
	NSMutableSet* fRangedConstraints;
	/*^block*/id fPlaceInferenceHandler;
	unsigned long long fFidelityPolicy;
	CLTimer* fPlaceInferenceTimer;
	CLSilo* fSilo;

}

@property (nonatomic,readonly) NSMutableSet * rangedRegions; 
@property (nonatomic,readonly) NSMutableSet * rangedConstraints; 
@property (assign,nonatomic,__weak) id<CLLocationManagerDelegate> delegate; 
@property (assign,nonatomic,__weak) CLLocationManager * manager; 
-(void)setManager:(CLLocationManager *)arg1 ;
-(int)PausesLocationUpdatesAutomatically;
-(id)initWithInfo:(id)arg1 bundleIdentifier:(id)arg2 bundle:(id)arg3 delegate:(id)arg4 silo:(id)arg5 ;
-(void)setPausesLocationUpdatesAutomatically:(int)arg1 ;
-(BOOL)hasLingeringRangingRequest;
-(void)dealloc;
-(BOOL)showsBackgroundLocationIndicator;
-(void)cancelLocationRequest;
-(CLLocationManager *)manager;
-(void)stopUpdatingLocationAutoPaused;
-(void)cancelRangingRequest;
-(void)performCourtesyPromptIfNeeded;
-(void)cancelLingeringRangingRequest;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(void)setShowsBackgroundLocationIndicator:(BOOL)arg1 ;
-(NSMutableSet *)rangedRegions;
-(BOOL)allowsBackgroundLocationUpdates;
-(NSMutableSet *)rangedConstraints;
-(void)invalidate;
-(id<CLLocationManagerDelegate>)delegate;
-(void)setAllowsBackgroundLocationUpdates:(BOOL)arg1 ;
@end

