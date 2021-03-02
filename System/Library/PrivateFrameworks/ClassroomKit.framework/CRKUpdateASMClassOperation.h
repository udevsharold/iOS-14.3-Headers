/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@protocol CRKClassKitRosterRequirements;
@class NSString, CRKASMCourseUpdateProperties;

@interface CRKUpdateASMClassOperation : CATOperation {

	NSString* _objectID;
	CRKASMCourseUpdateProperties* _properties;
	id<CRKClassKitRosterRequirements> _requirements;

}

@property (nonatomic,copy,readonly) NSString * objectID;                                    //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,copy,readonly) CRKASMCourseUpdateProperties * properties;              //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) id<CRKClassKitRosterRequirements> requirements;              //@synthesize requirements=_requirements - In the implementation block
-(NSString *)objectID;
-(void)main;
-(id<CRKClassKitRosterRequirements>)requirements;
-(BOOL)isAsynchronous;
-(CRKASMCourseUpdateProperties *)properties;
-(id)initWithObjectID:(id)arg1 properties:(id)arg2 requirements:(id)arg3 ;
-(void)fetchClasses;
-(void)didFetchClasses:(id)arg1 error:(id)arg2 ;
-(id)classWithObjectID:(id)arg1 inClasses:(id)arg2 ;
-(void)applyPropertiesToClass:(id)arg1 ;
-(id)makePropertyApplicator;
-(void)saveClass:(id)arg1 ;
@end
