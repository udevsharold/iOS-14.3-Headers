/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OSAServicesClient.framework/OSAServicesClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OTAAgentServices;
#import <OSAServicesClient/OSAServicesClient-Structs.h>
@class NSXPCConnection;

@interface OSAServicesClient : NSObject {

	NSXPCConnection* _connection;
	id<OTAAgentServices> _synchRemoteObjectProxy;

}
+(id)sharedClient;
-(id)init;
-(id)crashreporterKey;
-(void)dealloc;
-(unsigned)uidForUser:(id)arg1 ;
-(id)awdKey;
-(BOOL)setPreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 toValue:(void*)arg4 ;
-(BOOL)deletePreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 ;
-(id)queryKey:(CFStringRef)arg1 ;
@end

