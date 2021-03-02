/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/TRITaskAttributing.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, TRIDownloadOptions;

@interface TRITaskAttributionInternalInsecure : NSObject <TRITaskAttributing, NSCopying> {

	int _triCloudKitContainer;
	NSString* _teamIdentifier;
	NSString* _applicationBundleIdentifier;
	TRIDownloadOptions* _networkOptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * teamIdentifier;                           //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (nonatomic,readonly) int triCloudKitContainer;                            //@synthesize triCloudKitContainer=_triCloudKitContainer - In the implementation block
@property (nonatomic,readonly) NSString * applicationBundleIdentifier;              //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,readonly) TRIDownloadOptions * networkOptions;                 //@synthesize networkOptions=_networkOptions - In the implementation block
+(id)taskAttributionWithTeamIdentifier:(id)arg1 triCloudKitContainer:(int)arg2 applicationBundleIdentifier:(id)arg3 networkOptions:(id)arg4 ;
+(id)taskAttributionFromPersistedTask:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(unsigned long long)hash;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)teamIdentifier;
-(id)initWithTeamIdentifier:(id)arg1 triCloudKitContainer:(int)arg2 applicationBundleIdentifier:(id)arg3 networkOptions:(id)arg4 ;
-(int)triCloudKitContainer;
-(TRIDownloadOptions *)networkOptions;
-(BOOL)isEqualToTaskAttribution:(id)arg1 ;
-(id)copyWithReplacementTeamIdentifier:(id)arg1 ;
-(id)copyWithReplacementTriCloudKitContainer:(int)arg1 ;
-(id)copyWithReplacementApplicationBundleIdentifier:(id)arg1 ;
-(id)copyWithReplacementNetworkOptions:(id)arg1 ;
-(id)asPersistedTaskAttribution;
@end
