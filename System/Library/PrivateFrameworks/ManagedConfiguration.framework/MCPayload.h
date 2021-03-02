/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MCProfile, NSString, NSDictionary, NSArray;

@interface MCPayload : NSObject {

	MCProfile* _profile;
	NSString* _type;
	NSString* _payloadDescription;
	NSString* _displayName;
	NSString* _identifier;
	NSString* _organization;
	NSString* _UUID;
	long long _version;
	NSString* _persistentResourceID;
	BOOL _mustInstallNonInteractively;

}

@property (nonatomic,__weak,readonly) MCProfile * profile;                         //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain,readonly) NSString * friendlyName; 
@property (nonatomic,retain,readonly) NSString * type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,retain,readonly) NSString * payloadDescription;               //@synthesize payloadDescription=_payloadDescription - In the implementation block
@property (nonatomic,retain) NSString * displayName;                               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain,readonly) NSString * organization;                     //@synthesize organization=_organization - In the implementation block
@property (nonatomic,retain,readonly) NSString * UUID;                             //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) long long version;                                  //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSString * persistentResourceID;                      //@synthesize persistentResourceID=_persistentResourceID - In the implementation block
@property (nonatomic,readonly) NSDictionary * restrictions; 
@property (assign,nonatomic) BOOL mustInstallNonInteractively;                     //@synthesize mustInstallNonInteractively=_mustInstallNonInteractively - In the implementation block
@property (nonatomic,readonly) BOOL containsSensitiveUserInformation; 
@property (nonatomic,retain,readonly) NSArray * installationWarnings; 
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
+(id)payloadsFromArray:(id)arg1 isStub:(BOOL)arg2 profile:(id)arg3 outError:(id*)arg4 ;
+(id)localizedDescriptionForPayloadCount:(unsigned long long)arg1 ;
+(id)badFieldValueErrorWithField:(id)arg1 underlyingError:(id)arg2 ;
+(id)missingFieldErrorWithField:(id)arg1 underlyingError:(id)arg2 ;
+(id)badFieldValueErrorWithField:(id)arg1 ;
+(id)conflictingFieldValueErrorWithUnderlyingError:(id)arg1 ;
+(id)_sharedHomePodPayloadClasses;
+(id)_sharedWatchPayloadClasses;
+(id)_minimumWatchVersionRequirementsForPayloads;
+(id)installableHomePodConfigurationPayloadClasses;
+(id)remoteQueueableHomePodPayloadClasses;
+(id)installableWatchConfigurationPayloadClasses;
+(id)remoteQueueableWatchPayloadClasses;
+(id)wrapperPayloadDictionary;
+(id)localizedParenthesizedFormDescriptionForPayloadCount:(unsigned long long)arg1 ;
+(id)unavailableSystemPayloadsInEphemeralMultiUser;
+(id)unavailableUserPayloadsInEphemeralMultiUser;
+(id)payloadFromDictionary:(id)arg1 isStub:(BOOL)arg2 profile:(id)arg3 outError:(id*)arg4 ;
+(id)availablePayloadsForUserEnrollment;
+(id)unavailablePayloadsInEphemeralMultiUser;
+(id)mdmAdoptablePayloads;
+(id)cellularRequiredPayloads;
+(id)supervisedRequiredPayloads;
+(id)badFieldTypeErrorWithField:(id)arg1 ;
-(id)verboseDescription;
-(id)stubDictionary;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)malformedPayloadErrorWithError:(id)arg1 ;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(NSArray *)installationWarnings;
-(id)filterForUserEnrollmentOutError:(id*)arg1 ;
-(NSString *)UUID;
-(id)subtitle2Label;
-(MCProfile *)profile;
-(BOOL)containsSensitiveUserInformation;
-(id)subtitle2Description;
-(BOOL)mustInstallNonInteractively;
-(BOOL)isSupportedByWatchVersions:(id)arg1 ;
-(id)serializedDictionary;
-(NSString *)persistentResourceID;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setMustInstallNonInteractively:(BOOL)arg1 ;
-(NSString *)identifier;
-(id)description;
-(NSString *)type;
-(NSDictionary *)restrictions;
-(void)setPersistentResourceID:(NSString *)arg1 ;
-(NSString *)payloadDescription;
-(long long)version;
-(NSString *)friendlyName;
-(NSString *)organization;
-(id)title;
-(NSString *)displayName;
@end
