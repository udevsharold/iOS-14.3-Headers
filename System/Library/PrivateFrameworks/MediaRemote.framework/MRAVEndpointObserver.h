/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MRAVRoutingDiscoverySession, NSArray, NSString, MRAVEndpoint;

@interface MRAVEndpointObserver : NSObject {

	MRAVRoutingDiscoverySession* _discoverySession;
	NSArray* _endpoints;
	/*^block*/id _endpointChangedCallback;
	BOOL _didBegin;
	NSString* _outputDeviceUID;
	MRAVEndpoint* _endpoint;

}

@property (nonatomic,copy) id endpointChangedCallback; 
@property (nonatomic,readonly) NSString * outputDeviceUID;              //@synthesize outputDeviceUID=_outputDeviceUID - In the implementation block
@property (nonatomic,readonly) MRAVEndpoint * endpoint;                 //@synthesize endpoint=_endpoint - In the implementation block
-(void)begin;
-(MRAVEndpoint *)endpoint;
-(void)_handleOutputContextDidChangeNotification;
-(void)setEndpointChangedCallback:(id)arg1 ;
-(id)endpointChangedCallback;
-(NSString *)outputDeviceUID;
-(void)end;
-(id)initWithOutputDeviceUID:(id)arg1 ;
@end
