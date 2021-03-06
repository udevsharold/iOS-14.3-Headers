/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DAContainer.h>

@class NSString;

@interface DAABLegacyContainer : NSObject <DAContainer> {

	void* _source;

}

@property (nonatomic,readonly) void* source;                                                   //@synthesize source=_source - In the implementation block
@property (assign,getter=isGuardianRestricted,nonatomic) BOOL guardianRestricted; 
@property (assign,getter=isGuardianStateDirty,nonatomic) BOOL guardianStateDirty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isContainer;
-(BOOL)isGroup;
-(BOOL)isLocal;
-(id)accountIdentifier;
-(void)setName:(id)arg1 ;
-(void)setExternalIdentifier:(id)arg1 ;
-(id)externalIdentifier;
-(id)cTag;
-(id)syncTag;
-(void)setAccountIdentifier:(id)arg1 ;
-(BOOL)isContact;
-(void)setType:(long long)arg1 ;
-(void)updateSaveRequest:(id)arg1 ;
-(void)dealloc;
-(void)setGuardianRestricted:(BOOL)arg1 ;
-(BOOL)isGuardianRestricted;
-(id)syncData;
-(void)setSyncData:(id)arg1 ;
-(id)identifier;
-(long long)type;
-(void)markForDeletion;
-(id)constraintsPath;
-(void)setConstraintsPath:(id)arg1 ;
-(BOOL)isGuardianStateDirty;
-(void)setGuardianStateDirty:(BOOL)arg1 ;
-(void*)source;
-(BOOL)isAccount;
-(void)setSyncTag:(id)arg1 ;
-(id)meContactIdentifier;
-(void)setMeContactIdentifier:(id)arg1 ;
-(BOOL)isContentReadonly;
-(id)name;
-(void)setContentReadonly:(BOOL)arg1 ;
-(BOOL)arePropertiesReadonly;
-(void)setArePropertiesReadonly:(BOOL)arg1 ;
-(BOOL)isSearchContainer;
-(void)markAsDefault;
-(id)asContainer;
-(id)initWithABSource:(void*)arg1 ;
-(void)setCTag:(id)arg1 ;
-(void*)asSource;
@end

