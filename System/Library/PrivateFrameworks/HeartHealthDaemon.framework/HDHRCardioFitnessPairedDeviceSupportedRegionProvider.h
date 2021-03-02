/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HeartHealthDaemon.framework/HeartHealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHRCardioFitnessPairedDeviceSupportedRegionProviding.h>

@class NSDictionary, NSString;

@interface HDHRCardioFitnessPairedDeviceSupportedRegionProvider : NSObject <HDHRCardioFitnessPairedDeviceSupportedRegionProviding> {

	NSDictionary* _localSupportedRegions;
	NSString* _deviceProperty;

}
-(id)initWithLocalSupportedRegions:(id)arg1 ;
-(id)watchSupportedRegionsOnDevice:(id)arg1 ;
-(id)phoneSupportedRegionsOnDevice:(id)arg1 ;
-(id)localSupportedRegions;
@end
