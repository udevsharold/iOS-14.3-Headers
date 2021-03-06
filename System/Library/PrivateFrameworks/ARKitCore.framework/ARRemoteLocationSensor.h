/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARRemoteSensor.h>
#import <ARKitCore/ARLocationSensorProtocol.h>

@class ARLocationData, NSString;

@interface ARRemoteLocationSensor : ARRemoteSensor <ARLocationSensorProtocol>

@property (nonatomic,readonly) ARLocationData * currentLocation; 
@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate; 
@property (assign,nonatomic) unsigned long long powerUsage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(id)init;
-(ARLocationData *)currentLocation;
-(unsigned long long)providedDataTypes;
-(void)lookupAltitudeAtCoordinate:(CLLocationCoordinate2D)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateARSessionState:(unsigned long long)arg1 ;
-(void)updateEstimationFromVIOPose:(id)arg1 imageData:(id)arg2 ;
-(void)updateFromVisualLocalizationResult:(id)arg1 ;
-(id)initWithServerConnection:(id)arg1 ;
@end

