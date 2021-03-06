/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UICollectionLayoutUpdateContainerOffsetResult.h>
@class NSSet;


@protocol _UICollectionLayoutUpdateContainerOffsetResult <NSObject>
@property (nonatomic,readonly) NSSet * invalidatedAuxillaryKinds; 
@required
-(NSSet *)invalidatedAuxillaryKinds;
-(id)indexPathsForInvalidatedSupplementariesOfKind:(id)arg1;

@end


@class NSSet, NSMutableDictionary, NSString;

@interface _UICollectionLayoutUpdateContainerOffsetResult : NSObject <_UICollectionLayoutUpdateContainerOffsetResult> {

	NSMutableDictionary* _invalidatedSupplementaryIndexesDict;

}

@property (nonatomic,readonly) NSSet * invalidatedAuxillaryKinds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)invalidatedAuxillaryKinds;
-(id)init;
-(void)addInvalidatedSupplementaryForKind:(id)arg1 indexPath:(id)arg2 ;
-(id)indexPathsForInvalidatedSupplementariesOfKind:(id)arg1 ;
@end

