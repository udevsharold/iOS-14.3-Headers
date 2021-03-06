/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PPSource, NSString;


@protocol PPRecord
@property (nonatomic,readonly) PPSource * source; 
@property (nonatomic,readonly) double initialScore; 
@property (nonatomic,readonly) NSString * extractionOsBuild; 
@property (nonatomic,readonly) unsigned extractionAssetVersion; 
@required
-(NSString *)extractionOsBuild;
-(unsigned)extractionAssetVersion;
-(PPSource *)source;
-(double)initialScore;

@end

