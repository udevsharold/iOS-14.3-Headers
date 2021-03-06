/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRTransportExternalDevice.h>
#import <libobjc.A.dylib/MRProtocolClientConnectionDelegate.h>

@class NSString;

@interface MRJSONTransportExternalDevice : MRTransportExternalDevice <MRProtocolClientConnectionDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPaired;
-(void)_handleSetStateMessage:(id)arg1 ;
-(id)_onWorkerQueue_createClientConnectionWithInputStream:(id)arg1 outputStream:(id)arg2 ;
@end

