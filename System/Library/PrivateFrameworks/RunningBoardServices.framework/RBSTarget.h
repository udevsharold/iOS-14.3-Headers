/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/RBSProcessMatching.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RBSProcessIdentifier, RBSProcessIdentity, NSString;

@interface RBSTarget : NSObject <RBSXPCSecureCoding, RBSProcessMatching, NSCopying> {

	RBSProcessIdentifier* _processIdentifier;
	RBSProcessIdentity* _processIdentity;
	NSString* _environment;
	NSString* _shortDescription;

}

@property (getter=isSystem,nonatomic,readonly) BOOL system; 
@property (nonatomic,readonly) RBSProcessIdentifier * processIdentifier;              //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,readonly) RBSProcessIdentity * processIdentity;                  //@synthesize processIdentity=_processIdentity - In the implementation block
@property (nonatomic,copy,readonly) NSString * environment;                           //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) NSString * shortDescription;                           //@synthesize shortDescription=_shortDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)targetWithProcessIdentity:(id)arg1 ;
+(BOOL)supportsRBSXPCSecureCoding;
+(id)currentProcess;
+(id)targetWithProcessIdentifier:(id)arg1 ;
+(id)systemTarget;
+(id)targetWithProcessIdentity:(id)arg1 environmentIdentifier:(id)arg2 ;
+(id)targetWithPid:(int)arg1 ;
+(id)targetWithProcessIdentifier:(id)arg1 environmentIdentifier:(id)arg2 ;
+(id)targetWithPid:(int)arg1 environmentIdentifier:(id)arg2 ;
-(RBSProcessIdentity *)processIdentity;
-(id)processPredicate;
-(BOOL)matchesProcess:(id)arg1 ;
-(BOOL)isSystem;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithEuid:(unsigned)arg1 ;
-(RBSProcessIdentifier *)processIdentifier;
-(NSString *)environment;
-(NSString *)debugDescription;
-(NSString *)shortDescription;
@end
