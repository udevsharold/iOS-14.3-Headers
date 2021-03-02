/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSSet;

@interface HMIUpdatedFaceprintsResult : HMFObject {

	NSSet* _existingAtOtherVersions;
	NSSet* _createdAtCurrentVersion;
	NSSet* _existingAtCurrentVersion;

}

@property (readonly) NSSet * allAtCurrentVersion; 
@property (readonly) NSSet * existingAtOtherVersions;               //@synthesize existingAtOtherVersions=_existingAtOtherVersions - In the implementation block
@property (readonly) NSSet * createdAtCurrentVersion;               //@synthesize createdAtCurrentVersion=_createdAtCurrentVersion - In the implementation block
@property (readonly) NSSet * existingAtCurrentVersion;              //@synthesize existingAtCurrentVersion=_existingAtCurrentVersion - In the implementation block
-(NSSet *)existingAtCurrentVersion;
-(NSSet *)createdAtCurrentVersion;
-(id)initWithExistingAtCurrentVersion:(id)arg1 createdAtCurrentVersion:(id)arg2 existingAtOtherVersions:(id)arg3 ;
-(NSSet *)allAtCurrentVersion;
-(NSSet *)existingAtOtherVersions;
@end
