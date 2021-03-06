/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSString;

@interface CLSClassMember : CLSObject <CLSRelationable> {

	BOOL _markedForDeletion;
	NSString* _personID;
	unsigned long long _roles;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) unsigned long long roles;              //@synthesize roles=_roles - In the implementation block
@property (assign,nonatomic) BOOL markedForDeletion;                //@synthesize markedForDeletion=_markedForDeletion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)relations;
+(id)objectIDForClassID:(id)arg1 andPersonID:(id)arg2 ;
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(void)setRoles:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)roles;
-(BOOL)markedForDeletion;
-(void)setMarkedForDeletion:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithClassID:(id)arg1 personID:(id)arg2 roles:(unsigned long long)arg3 ;
@end

