/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, GEOLogMsgState, NSString;

@interface GEOAnalyticsPipelineStateFactory : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	GEOLogMsgState* _deviceIdentifierState;
	GEOLogMsgState* _deviceIdentifierInternalState;
	GEOLogMsgState* _applicationIdentifierState;
	NSString* _countryCode;

}
+(id)sharedFactory;
-(id)placeCard;
-(id)deviceLocale;
-(id)mapView;
-(id)pairedDevice;
-(id)mapViewLocation;
-(id)suggestions;
-(id)deviceConnection;
-(id)mapRestore;
-(id)mapLaunch;
-(id)market;
-(id)extension;
-(id)mapsServer;
-(id)deviceIdentifier;
-(id)deviceIdentifierNoHardware;
-(id)_emptyUserSessionState;
-(id)init;
-(id)route;
-(id)stateForType:(long long)arg1 ;
-(void)dealloc;
-(id)deviceConnectionLimited;
-(id)mapsUser;
-(id)carPlayLimited;
-(id)sessionStateForType:(long long)arg1 ;
-(id)deviceSettings_Short;
-(id)mapSettings;
-(id)tileSet;
-(id)applicationIdentifier;
-(id)curatedCollection;
-(id)deviceIndentifierInternal;
-(id)lookAroundSummary;
-(id)deviceSettings_Long;
-(id)ugc;
-(id)experimentsIncludingABAssignInfo:(BOOL)arg1 includingClientConfig:(BOOL)arg2 ;
-(int)logMsgStateTypeForType:(long long)arg1 ;
-(id)mapUI;
-(id)placeRequest;
-(id)carPlay;
-(id)deviceLocaleLimited;
-(id)lookAroundView;
-(id)mapUIShown;
-(void)deviceCountryChanged:(id)arg1 ;
-(id)muninResourceLog;
@end
