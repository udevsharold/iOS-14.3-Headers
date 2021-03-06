/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DAContainer.h>

@class CNMutableContainer, NSString;

@interface DAContactsContainer : NSObject <DAContainer> {

	BOOL _markedForDeletion;
	BOOL _markedAsDefault;
	CNMutableContainer* _mutableContainer;

}

@property (nonatomic,readonly) CNMutableContainer * mutableContainer;                          //@synthesize mutableContainer=_mutableContainer - In the implementation block
@property (assign,nonatomic) BOOL markedForDeletion;                                           //@synthesize markedForDeletion=_markedForDeletion - In the implementation block
@property (assign,nonatomic) BOOL markedAsDefault;                                             //@synthesize markedAsDefault=_markedAsDefault - In the implementation block
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
-(id)initWithCNContainer:(id)arg1 ;
-(void)setGuardianRestricted:(BOOL)arg1 ;
-(BOOL)isGuardianRestricted;
-(id)syncData;
-(CNMutableContainer *)mutableContainer;
-(void)setMarkedAsDefault:(BOOL)arg1 ;
-(BOOL)markedAsDefault;
-(void)setSyncData:(id)arg1 ;
-(id)identifier;
-(long long)type;
-(void)markForDeletion;
-(id)constraintsPath;
-(void)setConstraintsPath:(id)arg1 ;
-(BOOL)isGuardianStateDirty;
-(void)setGuardianStateDirty:(BOOL)arg1 ;
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
-(void)setCTag:(id)arg1 ;
-(void*)asSource;
-(BOOL)markedForDeletion;
-(void)setMarkedForDeletion:(BOOL)arg1 ;
@end

