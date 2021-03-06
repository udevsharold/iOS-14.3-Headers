/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSComparisonPredicate.h>

@class PHAssetCollection;

@interface WFPHAssetCollectionPredicate : NSComparisonPredicate {

	PHAssetCollection* _assetCollection;

}

@property (nonatomic,readonly) PHAssetCollection * assetCollection;              //@synthesize assetCollection=_assetCollection - In the implementation block
-(PHAssetCollection *)assetCollection;
-(id)initForAssetsInCollection:(id)arg1 ;
-(id)wf_photoLibraryFilteringPredicate;
@end

