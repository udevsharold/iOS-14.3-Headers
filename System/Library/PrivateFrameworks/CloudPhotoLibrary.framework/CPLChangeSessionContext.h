/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CPLResetTracker;

@interface CPLChangeSessionContext : NSObject <NSSecureCoding> {

	unsigned long long _estimatedInitialSizeForLocalLibrary;
	unsigned long long _estimatedInitialAssetCountForLocalLibrary;
	CPLResetTracker* _resetTracker;

}

@property (assign,nonatomic) unsigned long long estimatedInitialSizeForLocalLibrary;                    //@synthesize estimatedInitialSizeForLocalLibrary=_estimatedInitialSizeForLocalLibrary - In the implementation block
@property (assign,nonatomic) unsigned long long estimatedInitialAssetCountForLocalLibrary;              //@synthesize estimatedInitialAssetCountForLocalLibrary=_estimatedInitialAssetCountForLocalLibrary - In the implementation block
@property (nonatomic,retain) CPLResetTracker * resetTracker;                                            //@synthesize resetTracker=_resetTracker - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)setEstimatedInitialAssetCountForLocalLibrary:(unsigned long long)arg1 ;
-(void)setEstimatedInitialSizeForLocalLibrary:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)estimatedInitialSizeForLocalLibrary;
-(unsigned long long)estimatedInitialAssetCountForLocalLibrary;
-(CPLResetTracker *)resetTracker;
-(void)setResetTracker:(CPLResetTracker *)arg1 ;
@end

