/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHFacePropertySet.h>

@class PHFaceprint, NSString;

@interface PHFaceClusteringProperties : PHFacePropertySet {

	PHFaceprint* _faceprint;
	NSString* _groupingIdentifier;

}

@property (nonatomic,readonly) PHFaceprint * faceprint;                    //@synthesize faceprint=_faceprint - In the implementation block
@property (nonatomic,readonly) NSString * groupingIdentifier;              //@synthesize groupingIdentifier=_groupingIdentifier - In the implementation block
+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)propertySetName;
+(id)propertiesToFetch;
+(id)keyPathToPrimaryObject;
-(NSString *)groupingIdentifier;
-(id)initWithFetchDictionary:(id)arg1 face:(id)arg2 prefetched:(BOOL)arg3 ;
-(PHFaceprint *)faceprint;
@end

