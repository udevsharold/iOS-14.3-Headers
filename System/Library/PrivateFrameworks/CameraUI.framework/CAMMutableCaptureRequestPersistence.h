/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSString;


@protocol CAMMutableCaptureRequestPersistence <NSObject>
@property (assign,nonatomic) long long persistenceOptions; 
@property (assign,nonatomic) unsigned long long deferredPersistenceOptions; 
@property (assign,nonatomic) long long temporaryPersistenceOptions; 
@property (nonatomic,copy) NSURL * localDestinationURL; 
@property (nonatomic,copy) NSString * persistenceUUID; 
@property (assign,nonatomic) BOOL shouldExtractDiagnosticsFromMetadata; 
@property (assign,nonatomic) BOOL shouldPersistDiagnosticsToSidecar; 
@property (assign,nonatomic) BOOL shouldDelayRemotePersistence; 
@required
-(BOOL)shouldDelayRemotePersistence;
-(void)setShouldExtractDiagnosticsFromMetadata:(BOOL)arg1;
-(void)setPersistenceOptions:(long long)arg1;
-(void)setDeferredPersistenceOptions:(unsigned long long)arg1;
-(void)setLocalDestinationURL:(id)arg1;
-(void)setPersistenceUUID:(id)arg1;
-(NSString *)persistenceUUID;
-(void)setShouldDelayRemotePersistence:(BOOL)arg1;
-(NSURL *)localDestinationURL;
-(void)setShouldPersistDiagnosticsToSidecar:(BOOL)arg1;
-(void)setTemporaryPersistenceOptions:(long long)arg1;
-(long long)persistenceOptions;
-(long long)temporaryPersistenceOptions;
-(unsigned long long)deferredPersistenceOptions;
-(BOOL)shouldExtractDiagnosticsFromMetadata;
-(BOOL)shouldPersistDiagnosticsToSidecar;

@end
