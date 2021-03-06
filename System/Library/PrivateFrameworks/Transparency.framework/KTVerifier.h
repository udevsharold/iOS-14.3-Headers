/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSXPCConnection, TransparencyApplication;

@interface KTVerifier : NSObject {

	NSString* _applicationIdentifier;
	NSXPCConnection* _connection;
	TransparencyApplication* _application;

}

@property (retain) TransparencyApplication * application;              //@synthesize application=_application - In the implementation block
@property (readonly) NSString * applicationIdentifier;                 //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (readonly) NSXPCConnection * connection;                     //@synthesize connection=_connection - In the implementation block
-(id)initWithApplication:(id)arg1 ;
-(void)forceValidateUUID:(id)arg1 uri:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)convertToSelfRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 updateCompletionBlock:(/*^block*/id)arg6 ;
-(void)clearLogClientConfiguration:(/*^block*/id)arg1 ;
-(void)copyApplicationState:(/*^block*/id)arg1 ;
-(void)validateSelfUriResult:(id)arg1 uuid:(id)arg2 syncedDatas:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(TransparencyApplication *)application;
-(id)validateEnrollmentUri:(id)arg1 accountID:(id)arg2 loggableData:(id)arg3 queryRequest:(id)arg4 insertResponse:(id)arg5 error:(id*)arg6 ;
-(void)forceApplicationConfig:(/*^block*/id)arg1 ;
-(void)copyKeyStoreStateFromDisk:(/*^block*/id)arg1 ;
-(id)validatePeerUri:(id)arg1 accountID:(id)arg2 loggableDatas:(id)arg3 queryResponse:(id)arg4 error:(id*)arg5 ;
-(void)invokeXPCAsynchronousCallWithBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)forceDutyCycle:(/*^block*/id)arg1 ;
-(void)clearState:(/*^block*/id)arg1 ;
-(void)clearPublicKeyStoreState:(/*^block*/id)arg1 ;
-(void)copyDataStoreStatistics:(/*^block*/id)arg1 ;
-(NSString *)applicationIdentifier;
-(void)copyKeyStoreState:(/*^block*/id)arg1 ;
-(void)setApplication:(TransparencyApplication *)arg1 ;
-(void)validatePeerUriResult:(id)arg1 uuid:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)validateEnrollmentUri:(id)arg1 accountID:(id)arg2 loggableData:(id)arg3 insertResponse:(id)arg4 promiseCompletionBlock:(/*^block*/id)arg5 ;
-(void)invokeXPCSynchronousCallWithBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)forceApplicationKeysDownload:(/*^block*/id)arg1 ;
-(void)forceApplicationKeysFetch:(/*^block*/id)arg1 ;
-(void)copyDaemonState:(/*^block*/id)arg1 ;
-(id)validateEnrollmentUri:(id)arg1 accountID:(id)arg2 loggableData:(id)arg3 insertResponse:(id)arg4 error:(id*)arg5 ;
-(void)convertToSelfRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 queryResponse:(id)arg4 updateCompletionBlock:(/*^block*/id)arg5 ;
-(void)validateEnrollmentUriResult:(id)arg1 uuid:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)validatePeerUri:(id)arg1 accountID:(id)arg2 loggableDatas:(id)arg3 queryResponse:(id)arg4 promiseCompletionBlock:(/*^block*/id)arg5 ;
-(id)validatePeerUri:(id)arg1 accountID:(id)arg2 loggableDatas:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 error:(id*)arg6 ;
-(void)resetRequestToPending:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSXPCConnection *)connection;
-(void)copyLogClientConfiguration:(/*^block*/id)arg1 ;
-(void)copyApplicationTranscript:(/*^block*/id)arg1 ;
-(void)forceConfigUpdate:(/*^block*/id)arg1 ;
@end

