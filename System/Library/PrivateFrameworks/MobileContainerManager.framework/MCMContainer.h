/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/MobileContainerManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileContainerManager/MobileContainerManager-Structs.h>
@class NSString, NSUUID, NSURL, NSDictionary;

@interface MCMContainer : NSObject {

	NSString* _identifier;
	NSUUID* _uuid;
	NSString* _personaUniqueString;
	long long _containerClass;
	container_object_sRef _thisContainer;

}

@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) container_object_sRef thisContainer; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSDictionary * info; 
@property (nonatomic,readonly) long long containerClass; 
@property (nonatomic,readonly) NSString * personaUniqueString; 
@property (getter=isTemporary,nonatomic,readonly) BOOL temporary; 
+(long long)typeContainerClass;
+(id)temporaryContainerWithIdentifier:(id)arg1 existed:(BOOL*)arg2 error:(id*)arg3 ;
+(id)containerWithIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2 existed:(BOOL*)arg3 error:(id*)arg4 ;
+(id)containerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqualToContainer:(id)arg1 ;
-(id)init;
-(long long)containerClass;
-(NSDictionary *)info;
-(BOOL)isTemporary;
-(void)dealloc;
-(unsigned long long)hash;
-(NSString *)identifier;
-(NSUUID *)uuid;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)personaUniqueString;
-(void)_errorOccurred;
-(NSURL *)url;
-(void)markDeleted;
-(container_object_sRef)thisContainer;
-(container_object_sRef)getLowLevelContainerObject;
-(id)initWithIdentifier:(id)arg1 path:(id)arg2 uniquePathComponent:(id)arg3 uuid:(id)arg4 personaUniqueString:(id)arg5 error:(id*)arg6 ;
-(id)initWithIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2 existed:(BOOL*)arg3 temp:(BOOL)arg4 error:(id*)arg5 ;
-(id)destroyContainerWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)setInfoValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)infoValueForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)recreateDefaultStructureWithError:(id*)arg1 ;
-(BOOL)regenerateDirectoryUUIDWithError:(id*)arg1 ;
-(unsigned long long)diskUsageWithError:(id*)arg1 ;
-(BOOL)_obj1:(id)arg1 isEqualToObj2:(id)arg2 ;
@end

