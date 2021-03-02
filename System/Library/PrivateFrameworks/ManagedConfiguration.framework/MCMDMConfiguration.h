/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
@class NSString, NSDictionary, NSURL, NSObject;

@interface MCMDMConfiguration : NSObject {

	BOOL _isUserEnrollment;
	BOOL _memberQueueUseDevelopmentAPNS;
	BOOL _memberQueueSignMessage;
	int _memberQueueAccessRights;
	NSString* _memberQueueManagingProfileIdentifier;
	NSDictionary* _memberQueueOrganizationInfo;
	NSURL* _memberQueueServerURL;
	NSString* _personaID;
	NSString* _easEnrollmentID;
	NSObject*<OS_dispatch_queue> _memberQueue;
	SecIdentityRef _memberQueueIdentity;
	NSString* _memberQueueTopic;
	NSURL* _memberQueueCheckInURL;
	NSDictionary* _memberQueueMDMOptions;
	NSString* _memberQueuePushMagic;

}

@property (assign,nonatomic) BOOL isUserEnrollment;                                        //@synthesize isUserEnrollment=_isUserEnrollment - In the implementation block
@property (nonatomic,retain) NSString * personaID;                                         //@synthesize personaID=_personaID - In the implementation block
@property (nonatomic,retain) NSString * easEnrollmentID;                                   //@synthesize easEnrollmentID=_easEnrollmentID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                     //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSString * memberQueueManagingProfileIdentifier;              //@synthesize memberQueueManagingProfileIdentifier=_memberQueueManagingProfileIdentifier - In the implementation block
@property (assign,nonatomic) SecIdentityRef memberQueueIdentity;                           //@synthesize memberQueueIdentity=_memberQueueIdentity - In the implementation block
@property (nonatomic,retain) NSString * memberQueueTopic;                                  //@synthesize memberQueueTopic=_memberQueueTopic - In the implementation block
@property (nonatomic,retain) NSURL * memberQueueServerURL;                                 //@synthesize memberQueueServerURL=_memberQueueServerURL - In the implementation block
@property (nonatomic,retain) NSURL * memberQueueCheckInURL;                                //@synthesize memberQueueCheckInURL=_memberQueueCheckInURL - In the implementation block
@property (nonatomic,retain) NSDictionary * memberQueueOrganizationInfo;                   //@synthesize memberQueueOrganizationInfo=_memberQueueOrganizationInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * memberQueueMDMOptions;                         //@synthesize memberQueueMDMOptions=_memberQueueMDMOptions - In the implementation block
@property (assign,nonatomic) int memberQueueAccessRights;                                  //@synthesize memberQueueAccessRights=_memberQueueAccessRights - In the implementation block
@property (assign,nonatomic) BOOL memberQueueUseDevelopmentAPNS;                           //@synthesize memberQueueUseDevelopmentAPNS=_memberQueueUseDevelopmentAPNS - In the implementation block
@property (nonatomic,retain) NSString * memberQueuePushMagic;                              //@synthesize memberQueuePushMagic=_memberQueuePushMagic - In the implementation block
@property (assign,nonatomic) BOOL memberQueueSignMessage;                                  //@synthesize memberQueueSignMessage=_memberQueueSignMessage - In the implementation block
+(id)sharedConfiguration;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(NSString *)memberQueueTopic;
-(BOOL)memberQueueSignMessage;
-(id)init;
-(void)setPersonaID:(NSString *)arg1 ;
-(void)setMemberQueueAccessRights:(int)arg1 ;
-(BOOL)isUserEnrollment;
-(NSString *)personaID;
-(BOOL)memberQueueUseDevelopmentAPNS;
-(int)memberQueueAccessRights;
-(void)setMemberQueueManagingProfileIdentifier:(NSString *)arg1 ;
-(NSString *)memberQueuePushMagic;
-(void)setMemberQueueIdentity:(SecIdentityRef)arg1 ;
-(void)setMemberQueueOrganizationInfo:(NSDictionary *)arg1 ;
-(void)setMemberQueueServerURL:(NSURL *)arg1 ;
-(void)refreshDetailsFromDisk;
-(void)setIsUserEnrollment:(BOOL)arg1 ;
-(void)setMemberQueueTopic:(NSString *)arg1 ;
-(NSString *)easEnrollmentID;
-(BOOL)readConfigurationOutError:(id*)arg1 ;
-(void)setMemberQueueMDMOptions:(NSDictionary *)arg1 ;
-(void)setMemberQueueCheckInURL:(NSURL *)arg1 ;
-(void)setMemberQueueSignMessage:(BOOL)arg1 ;
-(NSDictionary *)memberQueueMDMOptions;
-(NSString *)memberQueueManagingProfileIdentifier;
-(SecIdentityRef)memberQueueIdentity;
-(void)setMemberQueueUseDevelopmentAPNS:(BOOL)arg1 ;
-(void)setMemberQueuePushMagic:(NSString *)arg1 ;
-(void)setEasEnrollmentID:(NSString *)arg1 ;
-(NSDictionary *)memberQueueOrganizationInfo;
-(NSURL *)memberQueueServerURL;
-(void)memberQueueForgetCurrentConfiguration;
-(NSURL *)memberQueueCheckInURL;
@end
