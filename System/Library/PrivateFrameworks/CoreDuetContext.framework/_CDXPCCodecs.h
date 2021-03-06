/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _CDXPCCodecs : NSObject
+(BOOL)parseNotificationEvent:(id)arg1 registrationIdentifier:(id*)arg2 info:(id*)arg3 error:(id*)arg4 ;
+(void)addError:(id)arg1 toReply:(id)arg2 ;
+(BOOL)parseUnsubscribeFromContextValueNotificationsEvent:(id)arg1 registration:(id*)arg2 deviceIDs:(id*)arg3 error:(id*)arg4 ;
+(BOOL)keepAliveFromKeepAliveEvent:(id)arg1 error:(id*)arg2 ;
+(id)subscribeToContextValueNotificationsEventWithRegistration:(id)arg1 deviceIDs:(id)arg2 error:(id*)arg3 ;
+(id)errorFromReply:(id)arg1 ;
+(id)fetchPropertiesEventWithRemoteKeyPaths:(id)arg1 error:(id*)arg2 ;
+(id)fetchProxySourceDeviceUUIDEvent;
+(id)deviceIDsFromDictionary:(id)arg1 error:(id*)arg2 ;
+(BOOL)addKeyPaths:(id)arg1 toDictionary:(id)arg2 error:(id*)arg3 ;
+(id)notificationEventWithRegistrationIdentifier:(id)arg1 info:(id)arg2 error:(id*)arg3 ;
+(BOOL)addRegistration:(id)arg1 toDictionary:(id)arg2 error:(id*)arg3 ;
+(id)subscribeToContextValueNotificationsReplyWithEvent:(id)arg1 error:(id)arg2 ;
+(BOOL)parseSubscribeToContextValueNotificationsEvent:(id)arg1 registration:(id*)arg2 deviceIDs:(id*)arg3 error:(id*)arg4 ;
+(id)registrationFromDictionary:(id)arg1 error:(id*)arg2 ;
+(id)fetchProxySourceDeviceUUIDReplyWithEvent:(id)arg1 sourceDeviceUUID:(id)arg2 error:(id)arg3 ;
+(long long)eventTypeWithEvent:(id)arg1 ;
+(id)unsubscribeFromContextValueNotificationsReplyWithEvent:(id)arg1 error:(id)arg2 ;
+(id)commonContextValueNotificationsEventWithType:(const char*)arg1 registration:(id)arg2 deviceIDs:(id)arg3 error:(id*)arg4 ;
+(id)messageTypeFromEvent:(id)arg1 ;
+(id)parseProxySourceDeviceUUIDEvent:(id)arg1 error:(id*)arg2 ;
+(id)unsubscribeFromContextValueNotificationsEventWithRegistration:(id)arg1 deviceIDs:(id)arg2 error:(id*)arg3 ;
+(id)requestActivateDevicesReplyWithEvent:(id)arg1 error:(id)arg2 ;
+(id)requestActivateDevicesEvent;
+(id)keepAliveEventWithKeepAlive:(BOOL)arg1 error:(id*)arg2 ;
+(id)keyPathsFromDictionary:(id)arg1 error:(id*)arg2 ;
+(id)keepAliveReplyWithEvent:(id)arg1 error:(id)arg2 ;
+(id)fetchPropertiesReplyWithEvent:(id)arg1 error:(id)arg2 ;
+(id)keyPathsFromFetchPropertiesEvent:(id)arg1 error:(id*)arg2 ;
+(BOOL)addDeviceIDs:(id)arg1 toDictionary:(id)arg2 error:(id*)arg3 ;
@end

