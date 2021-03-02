/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRUpdateEndpointsMessage : MRProtocolMessage {

	NSArray* _endpoints;

}

@property (nonatomic,readonly) NSArray * externalEndpoints; 
@property (nonatomic,readonly) NSArray * externalOutputDevices; 
@property (nonatomic,readonly) NSArray * endpoints; 
@property (nonatomic,readonly) unsigned features; 
-(NSArray *)endpoints;
-(unsigned)features;
-(unsigned long long)type;
-(NSArray *)externalEndpoints;
-(NSArray *)externalOutputDevices;
-(id)initWithEndpoints:(id)arg1 endpointFeature:(unsigned)arg2 ;
@end
