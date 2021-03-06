/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSKit.framework/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSKCompatibilityDelegate;
@class NSString, NSData;

@interface TSKApplicationPropertiesProvider : NSObject {

	id<TSKCompatibilityDelegate> _compatibilityDelegate;

}

@property (nonatomic,readonly) NSString * applicationName; 
@property (nonatomic,readonly) NSString * applicationDisplayName; 
@property (nonatomic,readonly) unsigned long long applicationType; 
@property (nonatomic,readonly) NSString * documentTypeDisplayName; 
@property (nonatomic,readonly) NSString * documentTypeDisplayNameForSharingInvitation; 
@property (nonatomic,readonly) NSString * templateTypeDisplayName; 
@property (nonatomic,readonly) id<TSKCompatibilityDelegate> compatibilityDelegate;                   //@synthesize compatibilityDelegate=_compatibilityDelegate - In the implementation block
@property (nonatomic,readonly) NSString * cloudKitContainerIdentifier; 
@property (nonatomic,readonly) NSString * cloudKitSyncContainerIdentifier; 
@property (nonatomic,readonly) NSString * bladerunnerContainerIdentifier; 
@property (nonatomic,copy,readonly) id appTextDefaults; 
@property (nonatomic,copy,readonly) NSData * iWorkTextDefaultsPassphraseVerifier; 
@property (nonatomic,readonly) BOOL designModeEnabled; 
@property (nonatomic,readonly) BOOL supportsWebVideos; 
@property (nonatomic,readonly) unsigned long long webVideoRequiredDocumentWriteVersion; 
-(unsigned long long)applicationType;
-(NSString *)applicationName;
-(NSString *)applicationDisplayName;
-(NSString *)cloudKitContainerIdentifier;
-(NSString *)documentTypeDisplayName;
-(NSString *)templateTypeDisplayName;
-(BOOL)designModeEnabled;
-(id<TSKCompatibilityDelegate>)compatibilityDelegate;
-(NSString *)documentTypeDisplayNameForSharingInvitation;
-(NSString *)cloudKitSyncContainerIdentifier;
-(NSString *)bladerunnerContainerIdentifier;
-(unsigned long long)webVideoRequiredDocumentWriteVersion;
-(id)appTextDefaults;
-(NSData *)iWorkTextDefaultsPassphraseVerifier;
-(void)setAppTextDefaults:(id)arg1 passphraseVerifier:(id)arg2 ;
-(BOOL)supportsWebVideos;
-(id)initWithCompatibilityDelegate:(id)arg1 ;
@end

